#include <iostream>
#include <iomanip>
#include "uav.h"
using namespace std;

Uav::Uav(const int x, const int y, const int z)
    : x_pose(x), y_pose(y), z_pose(z)
{}

void Uav::setPose(const int x, const int y, const int z)
{
    x_pose = x;
    y_pose = y;
    z_pose = z;
}

void Uav::printPose() const
{
    cout << "X value : " << x_pose << endl;
    cout << "Y value : " << y_pose << endl;
    cout << "Z value : " << z_pose << endl;
}

void Uav::gen_trajectory(int diameter, int max_height, int start_angle)
{
    height = max_height - 5;

    // takeoff
    takeoffTime = 5;
    Nsamples = int(takeoffTime / 0.01);

}