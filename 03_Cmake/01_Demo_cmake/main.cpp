#include <iostream>
using namespace std;
#include "uav.h"

int main()
{
    Uav t1(10, 50, 59);
    t1.print();   // 10:50:59
    Uav t2;
    t2.print(); // 06:39:09
    t2.setTime(6, 39, 9);
    t2.print();  // 06:39:09

    if (t1.equals(t2))
        cout << "Two objects are equal\n";
    else
        cout << "Two objects are not equal\n";

    return 0;
}