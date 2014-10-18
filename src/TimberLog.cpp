#include <stdio.h>

#include "TimberLog.h"


TimberLog::TimberLog()
{

}

TimberLog::TimberLog(double x, double y,double z)
{
	_pos.set(x,y,z);
}

TimberLog::~TimberLog()
{
	_pos.set(12,2.5,1);
} 

double TimberLog::getX()
{
	return _pos.getX();//x;
}

void TimberLog::ResetPosition(double x, double y, double z)
{
	_pos.set(x, y, z);
}

void TimberLog::draw()
{
	glPushMatrix();
	glTranslatef(_pos.getX()/*-_speedX*/,_pos.getY(),_pos.getZ());
	glColor3ub(139,69,19);
	glScalef(4.0f, 2.f, 0.5f);
	glutSolidCube(1);
	glPopMatrix();
  
}

