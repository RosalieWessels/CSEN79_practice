#ifndef CLASSES_H  // Include guard to prevent multiple inclusions
#define CLASSES_H

#include <ostream>
#include <iostream>
#include <cmath>
using namespace std;

class Point {
    private:
        int x = 0;
        int y = 0;
    
    public:
        Point(int init_x, int init_y) {
            x = init_x;
            y = init_y;
        }

        Point() {
            x = 0;
            y = 0;
        }
    
        friend ostream& operator<<(ostream& out, const Point& p) {
            out << "x: " << p.x << ", y: " << p.y;
            return out;
        }

        bool operator==(const Point& p) {
            if (p.x == x && p.y == y) {
                return true;
            } else {
                return false;
            }
        }

        double calculate_distance() {
            double x_squared = x * x;
            double y_squared = y * y;
            double distance = std::sqrt(x_squared + y_squared);
            return distance;
        }

        int get_y() {
            return y;
        }

        int get_x() {
            return x;
        }
};

class Line {
    private:
        //y = mx+b
        Point point1;
        Point point2;
        double m;
        double b;

    public:
        Line(Point init_point1, Point init_point2) {
            point1 = init_point1;
            point2 = init_point2;
            calculate_slope();
            calculate_intercept();
        }

        void calculate_slope() {
            m = (double) (point2.get_y() - point1.get_y()) / (point2.get_x() - point1.get_x());
        }

        void calculate_intercept() {
            //y = mx + b
            b = (double) (point2.get_y()) - (m * point2.get_x());
        }

        double get_m() {
            return m;
        }
};

class OrderedPoints {
    private:
        Point* ordered_array;
        int count;
        int length;
    
    public:
        OrderedPoints(size_t length) {
            ordered_array = new Point[length];
            count = 0;
            length = length;
        };

        void printPoints() {
            for (int i = 0; i < count; i++) {
                cout << "Point " << i << ": " << ordered_array[i] << endl;
            }
        };

        bool addPoint(Point p) {
            double d = p.calculate_distance();
            if (count >= length) {
                return false;
            } else {
                for (int i = 0; i < count; i++) {
                    double d2 = ordered_array[count].calculate_distance();
                    if (d > d2) {
                        //insert here, shift items, & then break loop
                        //FINISH
                        count++;
                        return true;
                    } 
                }
            }
            printPoints();
        }

        // bool removePoint(Point p) {
        //     for (int i = 0; i < count; i++) {
        //         if (ordered_array[i] == p) {

        //         }
        //     }
        // }

        int returnCount() {
            return count;
        }
};

#endif