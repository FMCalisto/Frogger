#include "River.h"

#include <stdio.h>

//#include <GL/glut.h>

		River::River(){
		
		}
		/*~River::River(){
		
		}*/
		
		void River::draw(){
	
		   
	
	
//	 materials::rubber_red.use(); 
           /* glPushMatrix();
            glTranslatef(0,5,0);
            glEnable(GL_BLEND); 
			//glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            glColor4ub(0,128,255,0.5);
            glScalef(28.0f, 8.f, 1.f);
            glutSolidCube(1);
            glPopMatrix();*/
            
            Poligono* _pol = new Poligono();
            glColor4ub(0,128,255,0.5);
            _pol->setDim(8, 28);
            _pol->setPos(0,5,0);
            _pol->draw();
            
            glPushMatrix();
            glTranslatef(-16,5,0);
            glEnable(GL_BLEND); 
			//glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            glColor4ub(0,0,0,0.5);
            glScalef(4.0f, 8.f, 5.f);
            glutSolidCube(1);
            glPopMatrix();
            
              glPushMatrix();
            glTranslatef(17,5,0);
            glEnable(GL_BLEND); 
			//glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            glColor4ub(0,0,0,0.5);
            glScalef(6.0f, 12.f, 5.f);
            glutSolidCube(1);
            glPopMatrix();
          
		}

