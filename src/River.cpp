#include <stdio.h>

#include "River.h"


River::River()
{

}

/*
River::River(double x, double y, double z)
{
	_pos.set(x, y, z);
}
*/

/*
 * 	Acho que nao preciso do seguinte:
 */

/*
River::~River()
{
	_pos.set();
}

double River::getX()
{
	return _pos.getX();
}

void River::ResetPosition(double x, double y, double z)
{
	_pos.set(x, y, z);
}

*/

/* ================================================== */

void River::draw()
{
	glPushMatrix();
	glTranslatef(0,5,0);
	glEnable(GL_BLEND); 
	//glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glColor4ub(0,128,255,0.5);
	glScalef(28.0f, 8.f, 1.f);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-16,5,0);
	glEnable(GL_BLEND); 
	//glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glColor4ub(0,0,0,0.5);
	glScalef(4.0f, 8.f, 3.f);
	glutSolidCube(1);
	glPopMatrix();
}

