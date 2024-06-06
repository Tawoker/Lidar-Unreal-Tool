
struct StampedPose
{
    double stamp;
    Eigen::Isometry3d pose;
};

struct PoseNoize
{
    double x_min;
    double x_max;
    double y_min;
    double y_max;
    double z_min;
    double z_max;

    double roll_min;
    double roll_max;
    double pitch_min;
    double pitch_max;
    double yaw_min;
    double yaw_max;
};

double rand_double_in_interval(double min, double max)
{
    return ((double)std::rand() / RAND_MAX) * (max - min) + min;
}

auto create_trajectory_errors(const std::map<int, StampedPose> poses, PoseNoize noize)
{
    std::vector<Eigen::Isometry3d> e_poses;
    std::vector<Eigen::Isometry3d> relative_poses;

    for (const auto &p : traj.poses)
    {
        e_poses.push_back(traj.offset * p.second.pose);
    }
    for (auto it = std::next(e_poses.begin()); it != e_poses.end(); it++)
    {
        Eigen::Isometry3d prev_pose = *std::prev(it);
        Eigen::Isometry3d cur_pose = *it;

        Eigen::Isometry3d rel = cur_pose * prev_pose.inverse();
        relative_poses.push_back(rel);
    }

    for (size_t i = 0; i < e_poses.size() - 1; i++)
    {
        double err_roll = rand_double_in_interval(noize.roll_min, noize.roll_max);
        double err_pitch = rand_double_in_interval(noize.pitch_min, noize.pitch_min);
        double err_yaw = rand_double_in_interval(noize.yaw_min, noize.yaw_min);

        double err_x = rand_double_in_interval(noize.x_min, noize.x_max);
        double err_y = rand_double_in_interval(noize.y_min, noize.y_max);
        double err_z = rand_double_in_interval(noize.z_min, noize.z_max);

        Eigen::Quaternion err_quat = get_quat(err_roll, err_pitch, err_yaw);
        Eigen::Isometry3d err_transform = Eigen::Translation3d(0, 0, 0) * err_quat;

        relative_poses[i] = relative_poses[i] * err_transform;

        Eigen::Vetor3d v = relative_poses[i].translation();
        relative_poses[i].translation() = Eigen::Vector3d(v.x() + err_x, v.y() + err_y, v.z() + err_z);

        e_poses[i + 1] = relative_poses[i] * e_poses[i];
    }
    return e_poses;
}