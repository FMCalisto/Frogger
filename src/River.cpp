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
            glEnable(GL_BLEND); 
			//glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            glColor4ub(0,128,255,0.5);
            glScalef(28.0f, 8.f, 1.f);
            glutSolidCube(1);
            glPopMatrix();
          
		}

