#include "Car.h"
#include <stdio.h>

//#include <GL/glut.h>
 Poligono* _estrado = new Poligono();
 Poligono* _caixa = new Poligono();
Poligono* _cabine = new Poligono();
		Car::Car(){
		
		}
		
		Car::Car(double x, double y,double z){
		_pos.set(x,y,z);
        _speed.set(-4, 0.0, 0.0);
		}
		
		Car::~Car(){
		//hide=true;
		_pos.set(12,-3,1.5);
		  /*_x=12;
		 _y = -3;
		 _z = 1.5; */
		}
	
		double Car::getX()
		{
			return _pos.getX();
		}
		
		void Car::ResetPosition(double x, double y, double z)
		{
			_pos.set(x+rand()%6,y,z);
		}
		
		void Car::draw(){
		    
        	glPushMatrix();

                glTranslatef(_pos.getX(),_pos.getY(),_pos.getZ());  // -7, -5 e -3. Largura da estrada = 28. Assim que translatef.x = 12, destroy :) 
                /*glPushMatrix();
                glColor3ub(2,2,2);
                glScalef(3.0f, 2.f, 0.5f); 
                glutSolidCube(1);
                glPopMatrix();*/
                glColor3ub(2,2,2);
        
                _estrado->setDim(2, 4);
                _estrado->setPos(0,0,0);
                _estrado->draw(0.5); 
                
                /*glPushMatrix();
                    glTranslatef(-1.5,0,1.2);
                    glColor3ub(153,153,255);
                    glScalef(1.f, 2.f, 2.f); 
                    glutSolidCube(1);
                glPopMatrix();*/
                
                 glColor3ub(153,153,255);
        
                _cabine->setDim(2, 1);
                _cabine->setPos(-1.5,0,1.2);
                _cabine->draw(2.0); 
                
               /* glPushMatrix();
                    glTranslatef(0.5,0,0.5);
                    glColor3ub(229,204,255);
                    glScalef(2.f, 2.f, 0.5f); 
                    glutSolidCube(1);
                glPopMatrix();*/
                
                 glColor3ub(229,204,255);
        
                _caixa->setDim(2, 3);
                _caixa->setPos(0.5,0,0.75);
                _caixa->draw(); 
                
               /*roda tras esquerda*/
                glPushMatrix();
                    glTranslatef(1,-1,-0.3);
                    glColor3ub(32,32,32);
                    glScalef(0.5f, 0.5f, 1.f); 
                    glRotatef(-45.0, 0.0, 1.0, 0.0);
	                glRotatef(-90.0, 1.0, 0.0, 0.0);
                    glutSolidTorus(0.3, 0.3, 10, 20);
                glPopMatrix();
                
                /*roda tras direita*/
                glPushMatrix();
                    glTranslatef(1,1,-0.3);
                    glColor3ub(32,32,32);
                    glScalef(0.5f, 0.5f, 1.f); 
                    glRotatef(-45.0, 0.0, 1.0, 0.0);
	                glRotatef(-90.0, 1.0, 0.0, 0.0);
                    glutSolidTorus(0.3, 0.3, 10, 20);
                glPopMatrix();
                
                /*roda frente esquerda*/
                
                glPushMatrix();
                    glTranslatef(-1,-1,-0.3);
                    glColor3ub(32,32,32);
                    glScalef(0.5f, 0.5f, 1.f); 
                    glRotatef(-45.0, 0.0, 1.0, 0.0);
	                glRotatef(-90.0, 1.0, 0.0, 0.0);
                    glutSolidTorus(0.3, 0.3, 10, 20);
                glPopMatrix();
                
                /*roda frente direita*/
                glPushMatrix();
                    glTranslatef(-1,1,-0.3);
                    glColor3ub(32,32,32);
                    glScalef(0.5f, 0.5f, 1.f); 
                    glRotatef(-45.0, 0.0, 1.0, 0.0);
	                glRotatef(-90.0, 1.0, 0.0, 0.0);
                    glutSolidTorus(0.3, 0.3, 10, 20);
                glPopMatrix();
                
                
        	glPopMatrix();
        	
        	
		}
		
		void Car::setRotacao( int ang){}

 
