#include <ostream>
#include <iostream>
#include "classes.h"

using namespace std;

int main() {
    cout << "Hello" << endl;
    Point point1(2, 4);
    Point point2(4, 6);
    Line line(point1, point2);

    cout << "Points" << point1 << point2 << line.get_m() << endl; 
    return 0;
}
