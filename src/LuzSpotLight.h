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
	int _cutoff;
	GLfloat ambient[4];
	GLfloat diffuse[4];
	GLfloat specular[4];
	GLfloat spot_direction[3];
	
	

public:

	LuzSpotLight(float x, float y, float z, double xop=0, double yop=0, double zop=-1);
	LuzSpotLight(){}
	void updateCenter(float x , float y , float z);
	void refresh();
	void setStateLight(int value);
	void updateDirection(int dirX, int dirY, int dirZ);
	int isActivate();


		
};

#endif
