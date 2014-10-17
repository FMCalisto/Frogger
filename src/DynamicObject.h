#ifndef DynamicObject_H
#define DynamicObject_H

#include"Entity.h"
#include"GameObject.h"
#include "Vector3.h"




class DynamicObject : public GameObject {
	protected:
	//double _speedX; double _speedY;
	//double _x,_y,_z;
	Vector3 _pos;
	Vector3 _speed;
	public:
		double getSpeedX();
		void SetSpeedX(double speed);
		void SetPosX(double speed);
		void SetPosY(double speed);
		void SetPosZ(double speed);
		double getSpeedY();
		double getPosX();
		double getPosY();
		double getPosZ();
		void SetSpeedY(double speed);
		DynamicObject();
		~DynamicObject();
		void updateX(double delta_t);
		void updateY(double delta_t);

};
#endif 
