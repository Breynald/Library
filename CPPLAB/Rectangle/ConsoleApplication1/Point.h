#pragma once
#include <bits/stdc++.h>
using namespace std;

class Point{
private:
    double x;
    double y;
public:
    Point();
    Point(double startX, double startY);
    void translate(double xshift, double yshift);
    double getX();
    double getY();
    double distanceTo(Point p);
    bool isSameAs(Point other);
    void print();
};