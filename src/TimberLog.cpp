#include "TimberLog.h"
#include <stdio.h>
#include <time.h>

//#include <GL/glut.h>
 Poligono* _pol3 = new Poligono();
		TimberLog::TimberLog(){
		
		}
		
		TimberLog::TimberLog(double x, double y,double z){
		    _pos.set(x,y,z);
		    _speed.set((-(y/2.5)*2), 0.0, 0.0);
		}
		
		/*TimberLog::~TimberLog(){
		
		}*/
		double TimberLog::getX()
		{
			return _pos.getX();//x;
		}
		
		void TimberLog::ResetPosition(double x, double y, double z){
		    srand (time(NULL));
			_pos.set(12+rand()%6,_pos.getY(),1);
		}
		
		void TimberLog::draw(){
		
		    
		
           /* glPushMatrix();
            glTranslatef(_pos.getX(),_pos.getY(),_pos.getZ());
            glColor3ub(139,69,19);
            glScalef(4.0f, 2.f, 0.5f);
            glutSolidCube(1);
            glPopMatrix();*/
            
            
            glColor3ub(139,69,19);
        
            _pol3->setDim(2, 4);
            _pol3->setPos(_pos.getX(),_pos.getY(),_pos.getZ()-0.5);
            _pol3->draw(); 
          
		}
        void TimberLog::setRotacao( int ang){}
