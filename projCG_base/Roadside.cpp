

#include "Roadside.h"
#include <stdio.h>

//#include <GL/glut.h>

		Roadside::Roadside(){
		
		}
		/*~Roadside::Roadside(){
		
		}*/
		
		void Roadside::draw(){
		    glPushMatrix();
                glTranslatef(0,-10,0);
                glColor3ub(0,102,0);
                glScalef(28.0f, 2.f, 1.f);
                glutSolidCube(1);
            glPopMatrix();
          
		}
