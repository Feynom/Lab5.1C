#pragma once
#include "Vector3D.h"
#include <iostream>

class Vector3D_Public : public Vector3D
{
public:
	Vector3D_Public();
	Vector3D_Public(double, double, double);
	Vector3D_Public(Vector3D_Public&);

	Vector3D_Public& operator = (const Vector3D_Public&);
	friend ostream& operator << (ostream&, const Vector3D_Public&);
	friend istream& operator >> (istream&, Vector3D_Public&);
	operator string() const;

	Vector3D_Public& operator ++ ();
	Vector3D_Public& operator -- ();
	Vector3D_Public operator ++ (int);
	Vector3D_Public operator -- (int);

	friend Vector3D_Public operator + (Vector3D_Public&, Vector3D_Public&);
	friend Vector3D_Public operator - (Vector3D_Public&, Vector3D_Public&);
	friend double operator * (Vector3D_Public&, Vector3D_Public&);
};

