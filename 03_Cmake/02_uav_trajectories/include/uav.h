#ifndef UAV_H
#define UAV_H

class Uav
{
private:
    int x_pose;
    int y_pose;
    int z_pose;
public:
    //with default value
    Uav(const int x = 0, const int y = 0, const int z = 0);
    //	setter function
    void setPose(const int x, const int y, const int z);
    // Print a description of object in " hh:mm:ss"
    void printPose() const;
};

#endif