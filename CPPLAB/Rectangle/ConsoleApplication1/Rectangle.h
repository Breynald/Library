#include <bits/stdc++.h>
#include "Point.h"
using namespace std;

class Rectangle {
private:
	Point upperLeftVertex;
	double height;
	double width;
public:
	Rectangle(Point p1, Point p2);
	Rectangle(Point p, double heightValue, double widthValue);
	Point getUpperLeftVertex();
	double getWidth();
	double getHeight();
	double getArea();
	double getPerimeter();
	Point getCenter();
	void shift(double xShift, double yShift);
	bool contains(Point p);
};