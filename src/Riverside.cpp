
/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#include <GL/glut.h>
#include<stdio.h>

#include "Riverside.h"
//#include <GL/glut.h>

		Riverside::Riverside(){
		
		}
		
		/*~Riverside::Riverside(){
		
		}*/
		void Riverside::draw(){
		
            glPushMatrix();
                glTranslatef(0,10,0);
                glColor3ub(139,69,19);
                glScalef(28.0f, 2.f, 1.f);
                glutSolidCube(1);
            glPopMatrix();
            
            glPushMatrix();
                glTranslatef(0,0,0);
                glColor3ub(139,69,19);
                glScalef(28.0f, 2.f, 1.f);
                glutSolidCube(1);
            glPopMatrix();
            
            /*RIO*/
            /*glPushMatrix();
            glTranslatef(0,5,0);
            // glRotatef(angle, 0.1, 0.2, 0.5);
            glColor3ub(2,25,255);
            glScalef(28.0f, 8.f, 1.f);
            glutSolidCube(1);
            glPopMatrix();*/
     
		}

