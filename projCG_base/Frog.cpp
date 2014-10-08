#include "Frog.h"
#include <stdio.h>

//#include <GL/glut.h>

		Frog::Frog(){
		
		}
		/*~Frog::Frog(){
		
		}*/
		float raio = 2.0;
		
		void Frog::draw(){
        glPushMatrix();
            glTranslatef(0,0,0);
            glColor3ub(0,255,0);
            glScalef(1.0f, 0.5f, 1.0f); 
            glutSolidSphere(raio, 20,20);
    	glPopMatrix();



	    glPushMatrix();
            glTranslatef(-(raio/5*2),0,(raio/5*3));
            glColor3ub(255,255,255);
            glScalef(1.0f, 0.5f, 1.0f); 
            glutSolidSphere((raio/5*2), 20,20);/*raio 2*/
    	glPopMatrix();

        glPushMatrix();
            glTranslatef((raio/5*2),0,(raio/5*3));
            glColor3ub(255,255,255);
            glScalef(1.0f, 0.5f, 1.0f); 
            glutSolidSphere((raio/5*2), 20,20);
        glPopMatrix();

        glPushMatrix();
            glTranslatef(-(raio/2),0,((raio/5)*4));
            glColor3ub(0,0,0);
            glScalef(1.0f, 0.5f, 1.0f); 
            glutSolidSphere((raio/5), 20,20);
        glPopMatrix();

        glPushMatrix();
            glTranslatef((raio/2),0,((raio/5)*4));
            glColor3ub(0,0,0);
            glScalef(1.0f, 0.5f, 1.0f); 
            glutSolidSphere((raio/5), 20,20);
        glPopMatrix();
	
        glPopMatrix();      
		}


