#include <iostream>
using namespace std;
#include "uav.h"

int main()
{
    Uav uav1(10, 50, 59);
    uav1.printPose();   // 10 ; 50 ; 59
    Uav uav2;
    uav2.printPose(); // 0 ; 0 ; 0
    uav2.setPose(6, 39, 9);
    uav2.printPose();  // 06 ; 39 ; 09
}