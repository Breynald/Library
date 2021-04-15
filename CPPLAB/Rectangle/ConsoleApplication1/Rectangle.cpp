#include <bits/stdc++.h>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(Point p1, Point p2)
{
	upperLeftVertex = p1;
	height = p1.getY() - p2.getY();
	width = p2.getX() - p1.getX();
}

Rectangle::Rectangle(Point p, double heightValue, double widthValue)
{
	upperLeftVertex = p;
	height = heightValue;
	width = widthValue;
}

Point Rectangle::getUpperLeftVertex()
{
	return upperLeftVertex;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getHeight()
{
	return height;
}

double Rectangle::getArea()
{
	return height * width;
}

double Rectangle::getPerimeter()
{
	return 2 * (height + width);
}

Point Rectangle::getCenter()
{
	return Point(upperLeftVertex.getX() + (width / 2), upperLeftVertex.getY() - (height / 2));
}

void Rectangle::shift(double xShift, double yShift)
{
	upperLeftVertex.translate(xShift, yShift);
}

bool Rectangle::contains(Point p)
{
	if (p.getX() - upperLeftVertex.getX() <= width && upperLeftVertex.getY() - p.getY() <= height) {
		return true;
	}
	else {
		return false;
	}
}