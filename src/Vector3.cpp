#include <GL/glut.h>
#include "Vector3.h"
#include<iostream>
//#include <GL/glut.h>
using namespace std;

Vector3::Vector3(){}
Vector3::Vector3(double x, double y, double z)
{
	_x=x;
	_y=y;
	_z=z;
}
Vector3::~Vector3(){};

double Vector3::getX(){return _x; }
double Vector3::getY(){return _y;}
double Vector3::getZ(){return _z;}


void Vector3::set(double x, double y, double z)
{
	_x=x;
	_y=y;
	_z=z;
}

Vector3 Vector3::operator=(const Vector3 & vec)
{
	Vector3 temp;
	temp._x = vec._x;
	temp._y = vec._y;
	temp._z = vec._z;
	return temp;
}

Vector3 Vector3::operator*(double num)
{
	_x *= num;
	_y *= num;
	_z *= num;
	return *this;
}

Vector3 Vector3::operator+(const Vector3 & vec)
{
	_x += vec._x;
	_y += vec._y;
	_z += vec._z;
	return *this;
}

Vector3 Vector3::operator-(const Vector3 & vec)
{
	_x -= vec._x;
	_y -= vec._y;
	_z -= vec._z;
	return *this;
}
	


