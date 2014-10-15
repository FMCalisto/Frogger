#include "TimberLog.h"
#include <stdio.h>

//#include <GL/glut.h>

		TimberLog::TimberLog(){
		
		}
		
		TimberLog::TimberLog(double x, double y,double z){
		_pos.set(x,y,z);
		}
		
		/*TimberLog::~TimberLog(){
		
		}*/
		double TimberLog::getX()
		{
			return _pos.getX();//x;
		}
		
		void TimberLog::draw(){
            glPushMatrix();
            glTranslatef(_pos.getX()/*-_speedX*/,_pos.getY(),_pos.getZ());
            glColor3ub(139,69,19);
            glScalef(4.0f, 0.5f, 0.5f);
            glutSolidCube(1);
            glPopMatrix();
          
		}

