#pragma once
#include <iostream>
#include "Vector3D.h"

using namespace std;

class Vector3D_Private : private Vector3D
{
public:

	//Opened access to the methods of the Vector3D class
	using Vector3D::GetX;
	using Vector3D::GetY;
	using Vector3D::GetZ;

	using Vector3D::SetX;
	using Vector3D::SetY;
	using Vector3D::SetZ;

	using Vector3D::Vector3D;
	//Opened access to the methods of the Vector3D class

	Vector3D_Private();
	Vector3D_Private(double, double, double);
	Vector3D_Private(Vector3D_Private&);

	Vector3D_Private& operator = (const Vector3D_Private&);
	friend ostream& operator << (ostream&, const Vector3D_Private&);
	friend istream& operator >> (istream&, Vector3D_Private&);
	operator string() const;

	Vector3D_Private& operator ++ ();
	Vector3D_Private& operator -- ();
	Vector3D_Private operator ++ (int);
	Vector3D_Private operator -- (int);

	friend Vector3D_Private operator + (Vector3D_Private&, Vector3D_Private&);
	friend Vector3D_Private operator - (Vector3D_Private&, Vector3D_Private&);
	friend double operator * (Vector3D_Private&, Vector3D_Private&);
};

