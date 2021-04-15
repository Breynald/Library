#include <bits/stdc++.h>
#include "MyComplex.h"
using namespace std;

MyComplex::MyComplex()
{
	real = imaginary = 0;
}

MyComplex::MyComplex(double realValue)
{
	real = realValue;
	imaginary = 0;
}

MyComplex::MyComplex(double realValue, double imaginaryValue)
{
	real = realValue;
	imaginary = imaginaryValue;
}

void MyComplex::show()
{
	cout << '(' << real << ", " << imaginary << ')' << endl;
}

MyComplex MyComplex::operator+(MyComplex& c)
{
	return MyComplex(real + c.real, imaginary + c.imaginary);
}

MyComplex MyComplex::operator-(MyComplex& c)
{
	return MyComplex(real - c.real, imaginary - c.imaginary);
}

MyComplex MyComplex::operator*(MyComplex& c)
{
	return MyComplex((real * c.real) - (imaginary * c.imaginary), (real*c.imaginary)+(imaginary*c.real));
}

MyComplex MyComplex::operator/(MyComplex& c)
{
	return MyComplex(((real * c.real) - (imaginary * c.imaginary)) / (c.real * c.real + c.imaginary * c.imaginary),
		((real * c.imaginary) + (imaginary * c.real)) / (c.real * c.real + c.imaginary * c.imaginary));
}

void MyComplex::operator+=(MyComplex& c)
{
	real += c.real;
	imaginary += c.imaginary;
}

void MyComplex::operator-=(MyComplex& c)
{
	real -= c.real;
	imaginary -= imaginary;
}

void MyComplex::operator*=(MyComplex& c)
{
	MyComplex t(real, imaginary);
	*this = t * c;
}

void MyComplex::operator/=(MyComplex& c)
{
	MyComplex t(real, imaginary);
	*this = t / c;
}

MyComplex MyComplex::operator++()
{
	real += 1;
	return *this;
}

MyComplex MyComplex::operator++(int)
{
	MyComplex temp = *this;
	real += 1;
	return temp;
}

MyComplex MyComplex::operator--()
{
	real -= 1;
	return *this;
}

MyComplex MyComplex::operator--(int)
{
	MyComplex temp = *this;
	real -= 1;
	return temp;
}

bool MyComplex::operator==(MyComplex& c)
{
	if (real == c.real && imaginary == c.imaginary)
		return true;
	else return false;
}

bool MyComplex::operator!=(MyComplex& c)
{
	if (real == c.real && imaginary == c.imaginary)
		return false;
	else return true;
}

ostream& operator<<(ostream& out, const MyComplex& c)
{
	if (c.imaginary >= 0)
		out << c.real << " + " << c.imaginary << 'i';
	else
		out << c.real << " - " << c.imaginary*(-1) << 'i';
	return out;
}

istream& operator>>(istream& in, MyComplex& c)
{
	in >> c.real >> c.imaginary;
	return in;
}