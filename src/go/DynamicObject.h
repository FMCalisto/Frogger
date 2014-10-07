/* ================================================================= */
/* =========================== Francisco =========================== */
/* ================================================================= */

#ifndef DYNAMICOBJECT_H
#define DYNAMICOBJECT_H

#include "GameObject.h"
#include "Vector3.h"

class DynamicObject : public GameObject
{
	protected:
	Vector3 * _speed;
	public:
	DynamicObject();
	DynamicObject(double x, double y, double z);
	~DynamicObject();
	void update(double delta_t);
	void setSpeed(const Vector3 & speed);
	void setSpeed(double x, double y, double z);
	Vector3 * getSpeed();
};

#endif

/* ================================================================= */

/* ================================================================= */
