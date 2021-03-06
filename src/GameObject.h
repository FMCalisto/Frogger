#ifndef GameObject_H
#define GameObject_H
#include"Entity.h"
#include "Vector3.h"
#include "Poligono.h"


//using namespace std;


class GameObject : public Entity {
	protected:
	//double speedX,speedY;
	Vector3* vel;
	public:		
		GameObject();
		~GameObject();

	    virtual void draw();
        //virtual double updateXTRONCO();
		virtual void updateX(double delta_t);
		virtual void updateXTRONCO(double delta_t);
		virtual void updateY(double delta_t);
		virtual double getSpeedX();
		virtual void SetPosX(double x);
		virtual void SetPosY(double y);
		virtual void SetPosZ(double z);
		virtual double getPosX();
		virtual double getPosY();
		virtual double getPosZ();
		virtual double getX();
		virtual double getY();
		virtual double getZ();
		virtual void ResetPosition(double x, double y, double z);
		virtual void setRotacao( int ang);
		virtual void updateXTECLA(double delta_t);

};
#endif 
