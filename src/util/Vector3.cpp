#include "Vector3.h"

Vector3::Vector3()
{

}

Vector3::Vector3(double x, double y, double z)
{
	_x = x;
	_y = y;
	_z = z;
}

Vector3::~Vector3()
{
	_x = 0;
	_y = 0;
	_z = 0;
}

double Vector3::getX() const
{
	return _x;
}

double Vector3::getY() const
{
	return _y;
}

double Vector3::getZ() const
{
	return _z;
}

void Vector3::set(double x, double y, double z)
{
	_x = x;
	_y = y;
	_z = z;
}

Vector3 Vector3::operator=(const Vector3 & vec)
{
	Vector3 vector( vec.getX(), vec.getY(), vec.getZ());
	
	//vector.set(vec.getX,vec.getY,vec.getZ);
	
	return vector;
}

Vector3 Vector3::operator*(double num)
{
	//Vector3 vector(num*_x, num*_y, num*_z);
	
	//return vector;
	
	return Vector3(num*_x, num*_y, num*_z);
}

Vector3 Vector3::operator+(const Vector3 & vec)
{
	Vector3 vector(_x + vec.getX(), _y + vec.getY(), _z + vec.getZ());
	
	return vector;
}

Vector3 Vector3::operator-(const Vector3 & vec)
{
	Vector3 vector(_x - vec.getX(), _y - vec.getY(), _z - vec.getZ());
	
	return vector;
}
