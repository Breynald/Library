#include <bits/stdc++.h>
#include "Point.h"
#include "Rectangle.h"
using namespace std;



int main()
{
    Rectangle r(Point(0, 2), Point(2, 0));
    Point p = r.getCenter();
    p.print();
    r.shift(1, 1);
    p = r.getCenter();
    p.print();
    return 0;
}