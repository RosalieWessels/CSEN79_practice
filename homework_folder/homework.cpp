#include <ostream>
#include <iostream>
#include "homework.h"

using namespace std;

int main() {
    PolarPoint point;
    cout << "Default Polar Point radius: " << point.get_r() << " & angle: " << point.get_angle() << endl;
    point.set_angle( 25);
    cout << "Changed angle to" << point.get_angle() << endl;
    PolarPoint point2(25, 60);
    cout << "Custom Polar Point radius: " << point2.get_r() << " & angle: " << point2.get_angle() << endl;
    return 0;
}
