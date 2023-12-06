#ifndef UAV_H
#define UAV_H

class Uav
{
private:
    int hour;
    int minute;
    int second;
public:
    //with default value
    Uav(const int h = 0, const int m = 0, const int s = 0);
    //	setter function
    void setTime(const int h, const int m, const int s);
    // Print a description of object in " hh:mm:ss"
    void print() const;
    //compare two time object
    bool equals(const Uav&);
};

#endif