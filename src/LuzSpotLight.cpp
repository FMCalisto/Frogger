#include "Luz.h"
#include "LuzSpotLight.h"
#include "stdio.h"
int count = 0;

LuzSpotLight::LuzSpotLight(float x, float y, float z)
{
	_posX = x;
	_posY = y;
	_posZ = z;
	_dirX = 0;
	_dirY = 0 ;
	_dirZ = -1;
	_active = 0;
	count++;
	//printf("%d\n", count);
	_actual = count;
	//printf("%d\n", _actual);
	refresh();
}

void LuzSpotLight::refresh(){

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	GLfloat ambient[] = {0.1,0.1,0.1,0.0};
	GLfloat diffuse[] = {0.5, 0.5, 0.5, 0.0 };
	GLfloat specular[] = { 0.0, 0.0, 0.0, 0.0 };
	GLfloat position[] = {_posX, _posY, _posZ, 1.0};
	GLfloat spot_direction[] = {_dirX , _dirY , _dirZ};


	glLightfv(GL_LIGHT0+_actual, GL_AMBIENT, ambient);
	glLightfv(GL_LIGHT0+_actual, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHT0+_actual, GL_SPECULAR, specular);
	glLightfv(GL_LIGHT0+_actual, GL_POSITION, position);
	glLightf(GL_LIGHT0+_actual, GL_SPOT_CUTOFF, 40);
	glLightfv(GL_LIGHT0+_actual,GL_SPOT_DIRECTION, spot_direction);
	glLightf(GL_LIGHT0+_actual, GL_SPOT_EXPONENT, 0.0);
}

void LuzSpotLight::updateCenter(float x, float y, float z){
	refresh();
	_posX += x;
	_posY += y;
	_posZ += z;
}

int LuzSpotLight::isActivate(){
	return _active;
}


void LuzSpotLight::setStateLight(int value){
	_active = value;
	if(value == 1){
		glEnable(GL_LIGHT0+_actual);
		}
	else glDisable(GL_LIGHT0+_actual);
}

