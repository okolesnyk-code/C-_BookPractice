#include "chapter4_exercise2.h"
#include <iostream>
using namespace std;

struct point {
    int x;
    int y;
};

void chapter4_exercise2() {

    point p1, p2, p3;

    cout << "Enter coordinates of point p1: ";
    cin >> p1.x >> p1.y;

    cout << "Enter coordinates of point p2: ";
    cin >> p2.x >> p2.y;

    // Sum of two points
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    cout << "Coordinates of point p1 + p2 are "
        << p3.x << "." << p3.y << endl;

}