#include "Trunk.h"
#include <stdio.h>

Trunk::Trunk()
{

}

Trunk::Trunk(double x, double y,double z)
{
	_x=x;
	_y=y;
	_z=z;
}

Trunk::~Trunk()
{
//hide=true;
    _x=12;
    _y = -3;
    _z = 1.5;
}

double Trunk::getX()
{
	return _x;
}

void Trunk::draw()
{
    
	glPushMatrix();

        glTranslatef(_x/*-_speedX*/,_y,_z);  // -7, -5 e -3. Largura da estrada = 28. Assim que translatef.x = 12, destroy :) 
        glPushMatrix();
        glColor3ub(92, 51, 23);
        glScalef(3.0f, 2.f, 0.5f); 
        glutSolidCube(1);
        glPopMatrix();       
        
	glPopMatrix();
	
	
}