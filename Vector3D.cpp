#include "Vector3D.h"
#include "MyException.h"

double Vector3D::GetX() const { return x; }
double Vector3D::GetY() const { return y; }
double Vector3D::GetZ() const { return z; }

void Vector3D::SetX(double value) { x = value; }
void Vector3D::SetY(double value) { y = value; }
void Vector3D::SetZ(double value) { z = value; }

Vector3D::Vector3D() { x = 0, y = 0, z = 0; }
Vector3D::Vector3D(double x = 0, double y = 0, double z = 0) throw(invalid_argument, bad_exception, MyException, const char*)
{
	if (x == 1 && y == 1 && z == 1)
		throw invalid_argument("Invalid_argument");
	else if (x == 2 && y == 2 && z == 2)
		throw bad_exception();
	else if (x == 3 && y == 3 && z == 3)
		throw MyException("MyException");
	else if (x == 4 && y == 4 && z == 4)
		throw "Exception";

	this->x = x;
	this->y = y;
	this->z = z;
}
Vector3D::Vector3D(const Vector3D& A)
{
	x = A.GetX();
	y = A.GetY();
	z = A.GetZ();
}

string Vector3D::toString() const
{
	stringstream sout;

	sout << "\n\nX = " << GetX() << endl;
	sout << "Y = " << GetY() << endl;
	sout << "Z = " << GetZ() << endl;

	return sout.str();
}
void Vector3D::Read()
{
	cout << "X = "; cin >> x;
	cout << "Y = "; cin >> y;
	cout << "Z = "; cin >> z;
}
void Vector3D::Display()
{
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;
	cout << "Z = " << z << endl;
}