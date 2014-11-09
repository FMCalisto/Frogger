#include <GL/glut.h>
#include "Vector4.h"
#include<iostream>
//#include <GL/glut.h>
using namespace std;

Vector4::Vector4(){}
Vector4::Vector4(double x, double y, double z, double k)
{
	_x=x;
	_y=y;
	_z=z;
    _k=k;
}
Vector4::~Vector4(){};

double Vector4::getX(){return _x; }
double Vector4::getY(){return _y;}
double Vector4::getZ(){return _z;}
double Vector4::getK(){return _k;}

void Vector4::set(double x, double y, double z, double k)
{
	_x=x;
	_y=y;
	_z=z;
	_k=k;
}

Vector4 Vector4::operator=(const Vector4 & vec)
{
	Vector4 temp;
	temp._x = vec._x;
	temp._y = vec._y;
	temp._z = vec._z;
	temp._k = vec._k;
	return temp;
}

Vector4 Vector4::operator*(double num)
{
	_x *= num;
	_y *= num;
	_z *= num;
	_k *= num;
	return *this;
}

Vector4 Vector4::operator+(const Vector4 & vec)
{
	_x += vec._x;
	_y += vec._y;
	_z += vec._z;
	_k += vec._k;
	return *this;
}

Vector4 Vector4::operator-(const Vector4 & vec)
{
	_x -= vec._x;
	_y -= vec._y;
	_z -= vec._z;
	_k -= vec._k;
	return *this;
}
	


