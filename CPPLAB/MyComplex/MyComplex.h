#pragma once
#include <bits/stdc++.h>
using namespace std;

class MyComplex {
private:
	double real;
	double imaginary;
public:
	MyComplex();
	MyComplex(double realValue);
	MyComplex(double realValue, double imaginaryValue);
	void show();
	MyComplex operator+(MyComplex&);
	MyComplex operator-(MyComplex&);
	MyComplex operator*(MyComplex&);
	MyComplex operator/(MyComplex&);
	void operator+=(MyComplex&);
	void operator-=(MyComplex&);
	void operator*=(MyComplex&);
	void operator/=(MyComplex&);
	MyComplex operator++();
	MyComplex operator++(int);
	MyComplex operator--();
	MyComplex operator--(int);
	bool operator==(MyComplex&);
	bool operator!=(MyComplex&);
	friend ostream& operator<<(ostream& out, const MyComplex& c);
	friend istream& operator>>(istream& in, MyComplex& c);

};