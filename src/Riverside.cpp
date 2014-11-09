
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
		
		    Poligono* _pol = new Poligono();
            glColor3ub(139,69,19);
        
            _pol->setDim(2, 28);
            _pol->setPos(10);
            _pol->draw(); 
		
           /* glPushMatrix();
                glTranslatef(0,10,0);
                glColor3ub(139,69,19);
                glScalef(28.0f, 2.f, 1.f);
                glutSolidCube(1);
            glPopMatrix();*/
            
             Poligono* _pol1 = new Poligono();
            glColor3ub(139,69,19);
        
            _pol1->setDim(2, 28);
            _pol1->setPos(0);
            _pol1->draw(); 
            
          /*  glPushMatrix();
                glTranslatef(0,0,0);
                glColor3ub(139,69,19);
                glScalef(28.0f, 2.f, 1.f);
                glutSolidCube(1);
            glPopMatrix();*/
            
            /*RIO*/
            /*glPushMatrix();
            glTranslatef(0,5,0);
            // glRotatef(angle, 0.1, 0.2, 0.5);
            glColor3ub(2,25,255);
            glScalef(28.0f, 8.f, 1.f);
            glutSolidCube(1);
            glPopMatrix();*/
     
		}

