/* ================================================================= */
/* =========================== Francisco =========================== */
/* ================================================================= */

#include "DynamicObject.h"

DynamicObject::DynamicObject()
{

}

DynamicObject::DynamicObject(double x, double y, double z):GameObject(x,y,z)
{
_speed = new Vector3(0,0,0);
}

DynamicObject::~DynamicObject()
{

}

void DynamicObject::update(double delta_t)
{
	double x = getPosition()->getX() + getSpeed()->getX() * delta_t;
	double y = getPosition()->getY() + getSpeed()->getY() * delta_t;
	double z = getPosition()->getZ() + getSpeed()->getZ() * delta_t;
	
	std::cout << "x "<< x << "y "<<y<< "z " << z << std::endl;
	
	setPosition(x,y,z);
}

void DynamicObject::setSpeed(const Vector3 & speed)
{
	//_speed = speed;
}

void DynamicObject::setSpeed(double x, double y, double z)
{
_speed = new Vector3(x,y,z);
}

Vector3 * DynamicObject::getSpeed()
{
	return _speed;
}

/* ================================================================= */

/* ================================================================= */
