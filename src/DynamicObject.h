#ifndef DynamicObject_H
#define DynamicObject_H

#include"Entity.h"
#include"GameObject.h"
#include "Vector3.h"




class DynamicObject : public GameObject {
	protected:
	double _speedX; double _speedY;
	//Vector3 _speed;
	public:
		double getSpeed();
		void SetSpeed(double speed);
		DynamicObject();
		~DynamicObject();
		void update(double delta_t);

};
#endif 
