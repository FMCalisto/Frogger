#include "River.h"
#include <stdio.h>

//#include <GL/glut.h>

		River::River(){
		
		}
		/*~River::River(){
		
		}*/
		
		void River::draw(){
            glPushMatrix();
            glTranslatef(0,5,0);
            glColor3ub(0,128,255);
            glScalef(28.0f, 8.f, 1.f);
            glutSolidCube(1);
            glPopMatrix();
          
		}

