#ifndef StaticObject_H
#define StaticObject_H

#include"Entity.h"
#include"GameObject.h"




class StaticObject : public GameObject
{
	protected:
		Vector3 _pos;
	
	public:
		StaticObject();
		~StaticObject();
		
		double getSpeedY();
		double getPosX();
		double getPosY();
		double getPosZ();

};
#endif 
