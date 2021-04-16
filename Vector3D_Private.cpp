#include "Vector3D_Private.h"

Vector3D_Private::Vector3D_Private()
	: Vector3D(0, 0, 0)
{}
Vector3D_Private::Vector3D_Private(double x = 0, double y = 0, double z = 0)
	: Vector3D(x, y, z)
{}
Vector3D_Private::Vector3D_Private(Vector3D_Private& A)
	: Vector3D(A.GetX(), A.GetY(), A.GetZ())
{}

Vector3D_Private& Vector3D_Private::operator = (const Vector3D_Private& A)
{
	Vector3D(A.GetX(), A.GetY(), A.GetZ());
	return *this;
}
ostream& operator << (ostream& out, const Vector3D_Private& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Vector3D_Private& A)
{
	double x, y, z;
	cout << "Enter an X of Vector3D: "; in >> x;
	cout << "Enter an Y of Vector3D: "; in >> y;
	cout << "Enter a Z of Vector3D: "; in >> z;
	A.SetX(x); A.SetY(y); A.SetZ(z);
	return in;
}
Vector3D_Private::operator string() const
{
	stringstream ss;
	ss << "X of Vector3D is equal to " << this->GetX() << endl;
	ss << "Y of Vector3D is equal to " << this->GetY() << endl;
	ss << "Z of Vector3D is equal to " << this->GetZ() << endl;
	return ss.str();
}

Vector3D_Private& Vector3D_Private::operator ++ ()
{
	this->SetX(this->GetX() + 1);
	return *this;
}
Vector3D_Private& Vector3D_Private::operator -- ()
{
	this->SetX(this->GetX() - 1);
	return *this;
}
Vector3D_Private Vector3D_Private::operator ++ (int)
{
	Vector3D_Private t(*this);
	this->SetY(this->GetY() + 1);
	return t;
}
Vector3D_Private Vector3D_Private::operator -- (int)
{
	Vector3D_Private t(*this);
	this->SetY(this->GetY() - 1);
	return t;
}

Vector3D_Private operator +(Vector3D_Private& A, Vector3D_Private& B)
{
	Vector3D_Private t(A.GetX() + B.GetX(), A.GetY() + B.GetY(), A.GetZ() + B.GetZ());
	return t;
}
Vector3D_Private operator -(Vector3D_Private& A, Vector3D_Private& B)
{
	Vector3D_Private t(A.GetX() - B.GetX(), A.GetY() - B.GetY(), A.GetZ() - B.GetZ());
	return t;
}
double operator * (Vector3D_Private& A, Vector3D_Private& B)
{
	Vector3D_Private t2(A.GetX() * B.GetX(), A.GetY() * B.GetY(), A.GetZ() * B.GetZ());
	return t2.GetX() + t2.GetY() + t2.GetZ();
}