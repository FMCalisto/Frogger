#ifndef LUZDIRECIONAL_H
#define LUZDIRECIONAL_H
#include "Luz.h"


class LuzDirecional : public Luz{
private:
	float _posX;
	float _posY;
	float _posZ;
	int _active;

public:
	LuzDirecional(float x, float y, float z);
	LuzDirecional(){}
	void updateCenter(float x , float y , float z);
	void refresh();
	void setStateLight(int value);
	int isActivate();
	void updateDirection(int dirX, int dirY, int dirZ);


		
};

#endif
