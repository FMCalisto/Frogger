#include "Luz.h"
#include "LuzSpotLight.h"
#include "stdio.h"
int count = 0;



LuzSpotLight::LuzSpotLight(float x, float y, float z, double xop, double yop, double zop){
	_posX = x;
	_posY = y;
	_posZ = z;
	spot_direction[0] = _dirX = xop;
	spot_direction[1] = _dirY = yop;
	spot_direction[2] = _dirZ = zop;
	_active = 0;
	count++;

	_actual = count;
	ambient[0] = ambient[1] = ambient[2] = 0.1;
	diffuse[0] = diffuse[1] = diffuse[2] = 0.5;
	specular[0] = specular[1] = specular[2] = 0.0;
	ambient[3] = diffuse[3] = specular[3] = 0.0;

	if( _dirY != 0){
	    _cutoff = 30;
	}else{
	    _cutoff = 40;
	}
	refresh();
}

void LuzSpotLight::refresh(){

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	//GLfloat ambient[] = {0.1,0.1,0.1,0.0};
	//GLfloat diffuse[] = {0.5, 0.5, 0.5, 0.0 };
	//GLfloat specular[] = { 0.0, 0.0, 0.0, 0.0 };
	GLfloat position[] = {_posX, _posY, _posZ, 1.0};
	//GLfloat spot_direction[] = {_dirX , _dirY , _dirZ};


	glLightfv(GL_LIGHT0+_actual, GL_AMBIENT, ambient);
	glLightfv(GL_LIGHT0+_actual, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHT0+_actual, GL_SPECULAR, specular);
	glLightfv(GL_LIGHT0+_actual, GL_POSITION, position);
	glLightf(GL_LIGHT0+_actual, GL_SPOT_CUTOFF, /*40*/ _cutoff);
	glLightfv(GL_LIGHT0+_actual,GL_SPOT_DIRECTION, spot_direction);
	glLightf(GL_LIGHT0+_actual, GL_SPOT_EXPONENT, 0.0);
}

void LuzSpotLight::updateCenter(float x, float y, float z){
	refresh();
	_posX = x;
	_posY = y;
	_posZ = z;
}

void LuzSpotLight::updateDirection(int dirX, int dirY, int dirZ){
    spot_direction[0] = _dirX = dirX;
    spot_direction[1] = _dirY = dirY;
    spot_direction[2] = _dirZ = dirZ;
refresh();
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

