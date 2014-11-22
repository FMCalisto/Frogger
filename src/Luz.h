#ifndef LUZ_H
#define LUZ_H
#include <GL/glut.h>


class Luz{
private:
	float _posX;
	float _posY;
	float _posZ;
	int _active;

public:
	Luz(float x, float y, float z);
	Luz(){}
	virtual void updateCenter(float x , float y , float z) = 0;
	virtual void refresh() = 0;
	virtual int isActivate() = 0;
	virtual void setStateLight(int value) = 0;
	virtual void updateDirection(int dirX, int dirY, int dirZ)=0;


		
};


#endif
