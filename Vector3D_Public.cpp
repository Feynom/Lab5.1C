#include "Vector3D_Public.h"

Vector3D_Public::Vector3D_Public()
	: Vector3D(0, 0, 0)
{}
Vector3D_Public::Vector3D_Public(double x = 0, double y = 0, double z = 0)
	: Vector3D(x, y, z)
{}
Vector3D_Public::Vector3D_Public(Vector3D_Public& A)
	: Vector3D(A.GetX(), A.GetY(), A.GetZ())
{}

Vector3D_Public& Vector3D_Public::operator = (const Vector3D_Public& A)
{
	Vector3D(A.GetX(), A.GetY(), A.GetZ());
	return *this;
}
ostream& operator << (ostream& out, const Vector3D_Public& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Vector3D_Public& A)
{
	double x, y, z;
	cout << "Enter an X of Vector3D: "; in >> x;
	cout << "Enter an Y of Vector3D: "; in >> y;
	cout << "Enter a Z of Vector3D: "; in >> z;
	A.SetX(x); A.SetY(y); A.SetZ(z);
	return in;
}
Vector3D_Public::operator string() const
{
	stringstream ss;
	ss << "X of Vector3D is equal to " << this->GetX() << endl;
	ss << "Y of Vector3D is equal to " << this->GetY() << endl;
	ss << "Z of Vector3D is equal to " << this->GetZ() << endl;
	return ss.str();
}

Vector3D_Public& Vector3D_Public::operator ++ ()
{
	this->SetX(this->GetX() + 1);
	return *this;
}
Vector3D_Public& Vector3D_Public::operator -- ()
{
	this->SetX(this->GetX() - 1);
	return *this;
}
Vector3D_Public Vector3D_Public::operator ++ (int)
{
	Vector3D_Public t(*this);
	this->SetY(this->GetY() + 1);
	return t;
}
Vector3D_Public Vector3D_Public::operator -- (int)
{
	Vector3D_Public t(*this);
	this->SetY(this->GetY() - 1);
	return t;
}

Vector3D_Public operator +(Vector3D_Public& A, Vector3D_Public& B)
{
	Vector3D_Public t(A.GetX() + B.GetX(), A.GetY() + B.GetY(), A.GetZ() + B.GetZ());
	return t;
}
Vector3D_Public operator -(Vector3D_Public& A, Vector3D_Public& B)
{
	Vector3D_Public t(A.GetX() - B.GetX(), A.GetY() - B.GetY(), A.GetZ() - B.GetZ());
	return t;
}
double operator * (Vector3D_Public& A, Vector3D_Public& B)
{
	Vector3D_Public t2(A.GetX() * B.GetX(), A.GetY() * B.GetY(), A.GetZ() * B.GetZ());
	return t2.GetX() + t2.GetY() + t2.GetZ();
}