#include "Luz.h"
#include "LuzDirecional.h"
#include "stdio.h"


LuzDirecional::LuzDirecional(float x, float y, float z)
{
	_posX = x;
	_posY = y;
	_posZ = z;
	_active = 1;

	refresh();
}

void LuzDirecional::refresh(){
		
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	//limpa os buffers especificados
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	GLfloat ambient[] = {0.1,0.1,0.1,0.0};
	GLfloat diffuse[] = {1.0, 1.0, 1.0, 0.0 };
	GLfloat specular[] = { 1.0, 1.0, 1.0, 0.0 };
	//esta em cima do jogo
	GLfloat position[] = {_posX, _posY, _posZ, 0.0};


	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
	glLightfv(GL_LIGHT0, GL_POSITION, position);

}

void LuzDirecional::updateCenter(float x, float y, float z){
}

int LuzDirecional::isActivate(){
	return _active;
}


void LuzDirecional::setStateLight(int value){
	_active = value;
	if(value == 1){
		glEnable(GL_LIGHT0);
		}
	else{
	 glDisable(GL_LIGHT0);
	 }
}



