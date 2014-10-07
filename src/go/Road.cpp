#include "Road.h"
#include <stdio.h>

//#include <GL/glut.h>

		Road::Road(){
		
		}
		/*~Road::Road(){
		
		}*/
		
		void Road::draw(){
            glPushMatrix();
            glTranslatef(0,-5,0);
            glColor3ub(40,40,40);
            glScalef(28.0f, 8.f, 1.f);
            glutSolidCube(1);
            glPopMatrix();          
		}

