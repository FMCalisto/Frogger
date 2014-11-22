

#include "Roadside.h"
#include <stdio.h>

//#include <GL/glut.h>
		Poligono* _roads = new Poligono();
		Roadside::Roadside(){
		
		}
		/*~Roadside::Roadside(){
		
		}*/
		
		void Roadside::draw(){
		
 //materials::skin_green.use(); 
            glColor3ub(0,102,0);
        
            _roads->setDim(2, 28);
            _roads->setPos(0,-10,0);
            _roads->draw(); 
		
		   /* glPushMatrix();
                glTranslatef(0,-10,0);
                glColor3ub(0,102,0);
                glScalef(28.0f, 2.f, 1.f);
                glutSolidCube(1);
            glPopMatrix();*/
          
		}

