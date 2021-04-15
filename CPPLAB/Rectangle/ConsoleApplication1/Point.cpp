#include <bits/stdc++.h>
#include "Point.h"
using namespace std;

Point::Point()
{
	x = y = 0;
}

Point::Point(double startX, double startY)
{
	x = startX;
	y = startY;
}

void Point::translate(double xshift, double yshift)
{
	x += xshift;
	y += yshift;
}

double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}

double Point::distanceTo(Point p)
{
	return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
}

bool Point::isSameAs(Point other)
{
	if (x == other.x && y == other.y) return true;
	else return false;
}

void Point::print()
{
	cout << '(' << x << ", " << y << ')' << endl;
}
