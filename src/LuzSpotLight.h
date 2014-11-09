#ifndef LUZSPOTLIGHT_H
#define LUZSPOTLIGHT_H
#include "Luz.h"


class LuzSpotLight : public Luz{
private:
	float _posX;
	float _posY;
	float _posZ;
	float _dirX;
	float _dirY;
	float _dirZ;
	int _active;
	int _actual;
	

public:

	LuzSpotLight(float x, float y, float z);
	LuzSpotLight(){}
	void updateCenter(float x , float y , float z);
	void refresh();
	void setStateLight(int value);
	int isActivate();


		
};

#endif
