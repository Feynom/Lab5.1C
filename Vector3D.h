#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "MyException.h"

#pragma pack(1)

using namespace std;

class Vector3D
{
	double x, y, z;
public:
	double GetX() const;
	double GetY() const;
	double GetZ() const;

	void SetX(double value);
	void SetY(double value);
	void SetZ(double value);

	Vector3D();
	Vector3D(double, double, double) throw(invalid_argument, bad_exception, MyException, const char *);
	Vector3D(const Vector3D&);

	string toString() const;
	void Read();
	void Display();
};

