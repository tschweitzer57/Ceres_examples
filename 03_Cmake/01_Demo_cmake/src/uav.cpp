#include <iostream>
#include <iomanip>
#include "uav.h"
using namespace std;

Uav::Uav(const int h, const int m, const int s)
    : hour(h), minute(m), second(s)
{}

void Uav::setTime(const int h, const int m, const int s)
{
    hour = h;
    minute = m;
    second = s;
}

void Uav::print() const
{
    cout << setw(2) << setfill('0') << hour << ":"
        << setw(2) << setfill('0') << minute << ":"
        << setw(2) << setfill('0') << second << "\n";

}

bool Uav::equals(const Uav& otherTime)
{
    if (hour == otherTime.hour
        && minute == otherTime.minute
        && second == otherTime.second)
        return true;
    else
        return false;
}