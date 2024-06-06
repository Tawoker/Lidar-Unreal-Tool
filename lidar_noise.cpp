#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <stdlib.h>
#include <chrono>

// in UE units (cm)
const double ERROR_ON_MAX_DISTANCE = 20.0;
const double MAX_DISTANCE = 10000;

struct Vec3ptr
{
public:
    double* x, * y, * z;
    double xn, yn, zn;

    Vec3ptr(double* vec3_start)
    {
        x = vec3_start;
        y = vec3_start + 1;
        z = vec3_start + 2;

        normalize();
    }

    double len()
    {
        return sqrt((*x) * (*x) + (*y) * (*y) + (*z) * (*z));
    }

    void imposeError(float error_multiplier)
    {
        *x += xn * error_multiplier;
        *y += yn * error_multiplier;
        *z += zn * error_multiplier;
    }

private:
    void normalize()
    {
        double l = len();

        xn = *x / l;
        yn = *y / l;
        zn = *z / l;
    }
};

double vector_length(double x, double y, double z) {
    return sqrt(x * x + y * y + z * z);
}

std::vector<double> readVectorFromBinary(std::string filepath, int count) {
    std::ifstream rf(filepath + std::to_string(count), std::ios::in | std::ios::binary);

    if (rf.fail())
        std::cout << "error";

    rf.seekg(0, std::ios::end);
    const int length = rf.tellg();
    const int doubleCount = length / sizeof(double);
    rf.seekg(0, std::ios::beg);

    double* points = new double[doubleCount];
    rf.read((char*)points, length);
    rf.close();
    std::vector<double> result;
    result.insert(result.end(), &points[0], &points[doubleCount]);
    return result;
}

void writePointCloudToPcd(std::vector<double> point_cloud, std::string filepath, int count) {

    pcl::PointCloud<pcl::PointXYZ> cloud;

    cloud.height = 32; //vertical channel
    cloud.width = point_cloud.size() / (cloud.height * 3);
    cloud.is_dense = false;
    cloud.resize(cloud.width * cloud.height);

    for (int i = 0; i < cloud.size(); i++)
    {
        cloud[i].x = point_cloud[i * 3];
        cloud[i].y = point_cloud[i * 3 + 1];
        cloud[i].z = point_cloud[i * 3 + 2];
    }
    pcl::io::savePCDFileBinary(filepath + std::to_string(count) + ".pcd", cloud);
}

std::vector<double> readPointCloudFromBinary(std::string filepath, int count) {
    return readVectorFromBinary(filepath, count);
}

std::vector<double> readLocationFromBinary(std::string filepath, int count) {
    std::vector<double> data = readVectorFromBinary(filepath, count);
    std::vector<double> location;
    for (int i = 4; i < 7; i++) {
        location.insert(location.end(), data[i]);
    }
    return location;
}

std::vector<double> readRotationFromBinary(std::string filepath, int count) {
    std::vector<double> data = readVectorFromBinary(filepath, count);
    std::vector<double> rotation;
    for (int i = 1; i < 4; i++) {
        rotation.insert(rotation.end(), data[i]);
    }
    return rotation;
}

double error_range_by_length(double distance) {
    return ERROR_ON_MAX_DISTANCE * distance / MAX_DISTANCE;
}

double rand_double_in_interval(double min, double max) {
    return ((double)std::rand() / RAND_MAX) * (max - min) + min;
}

std::vector<double> vector_with_error(double x, double y, double z) {
    double length = vector_length(x, y, z);
    double error = error_range_by_length(length);
    double lower_bound = length - error;
    double upper_bound = length + error;
    double rand_error_ratio = (((double)std::rand() / RAND_MAX) * (upper_bound - lower_bound) + lower_bound) / length;
    std::vector<double> errored_vector{ x * rand_error_ratio, y * rand_error_ratio, z * rand_error_ratio };
    return errored_vector;
}

std::vector<double> turnPointCloudToLocalCoordinates(std::vector<double> global_pc, std::vector<double> location) {
    std::vector<double> local_pc;
    for (int i = 0; i < global_pc.size() / 3; i++) {
        local_pc.insert(local_pc.end(), global_pc[i * 3] - location[0]);
        local_pc.insert(local_pc.end(), global_pc[i * 3 + 1] - location[1]);
        local_pc.insert(local_pc.end(), global_pc[i * 3 + 2] - location[2]);
    }
    return local_pc;
}



std::vector<double> normalize_vector(double x, double y, double z) {
    double length = vector_length(x, y, z);
    std::vector<double> normalized_vector{ x / length, y / length ,z / length };
    return normalized_vector;
}

void imposeDistanceError(std::vector<double>& local_pc) {
    for (int i = 0; i < local_pc.size() / 3; i++)
    {
        int id = i * 3;

        auto v = Vec3ptr(&local_pc[id]);

        double abs_range = error_range_by_length(v.len());
        double acc_rand = rand_double_in_interval(-abs_range, abs_range);
        Vec3ptr(&local_pc[id]).imposeError(acc_rand);
    }
}


int main() {
    srand(time(NULL));
    auto start = std::chrono::high_resolution_clock::now();
    int pc_count = 6;
    std::vector<double> ideal_pc_g;
    std::vector<double> location;
    std::vector<double> rotation;
    std::vector<double> ideal_pc_l;
    for (int i = 0; i < pc_count; i++) {
        //считываем итое облако в глобальных координатах
        ideal_pc_g = readPointCloudFromBinary("E:/UE Projects/RobotRaceCopy/Temp/Pcd/pcd", i);
        //считываем итую локацию робота 
        location = readLocationFromBinary("E:/UE Projects/RobotRaceCopy/Temp/Location/location", i);
        //считываем итую ориентацию робота
        rotation = readRotationFromBinary("E:/UE Projects/RobotRaceCopy/Temp/Location/location", i);
        //переводим все точки в локальную систему координат
        ideal_pc_l = turnPointCloudToLocalCoordinates(ideal_pc_g, location);
        writePointCloudToPcd(ideal_pc_l, "ideal_pcd/ideal_l_", i);
        imposeDistanceError(ideal_pc_l);
        writePointCloudToPcd(ideal_pc_g, "ideal_pcd/ideal_g_", i);
        writePointCloudToPcd(ideal_pc_l, "imposed_error_pcd/errored_by_distance_", i);
    }
    auto stop = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count();
    return 0;
}