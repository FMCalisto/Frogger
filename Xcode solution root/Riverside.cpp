#if defined(__APPLE__) || defined(MACOSX)
    #include <GLUT/glut.h>
#else
    #include <GL/glut.h>
#endif

#include<stdio.h>

#include "Riverside.h"

		Riverside::Riverside(){
		
		}

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
     
		}

