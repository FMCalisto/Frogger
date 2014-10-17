#include "Frog.h"
#include <stdio.h>

//#include <GL/glut.h>

Frog::Frog(){

}
/*~Frog::Frog(){

}*/

Frog::Frog(float raio){
	_raio=raio;
}

//double Frog::getPosX(){return _pos.getX()/*_speedX*/;}
//double Frog::getPosY(){return _pos.getY()/*_speedX*/;}
//double Frog::getPosZ(){return _pos.getZ()/*_speedX*/;} 
//float _raio = 2;


/*
 *	Frog
 * 
 */
 

void Frog::ResetPosition(double x, double y)
{
	_pos.set(x,y,_raio);
}

void Frog::draw()
{
	
	/*	========== Frog Body ========== */
	
	glPushMatrix();
	
		glTranslatef(0+/*_speedX*/_pos.getX(),0+/*_speedY*/_pos.getY(),_raio);
		glColor3ub(0,255,0);
		glScalef(0.7f, 0.35f, 0.49f); /*reduzi em 30%*/ 
		glutSolidSphere(_raio, 20, 20);
	
	


	
	/* ========== White Globe | Left ========== */

	glPushMatrix();
		
		glTranslatef(-((_raio / 5.0) * 2.0), ((_raio / 5.0) * 2.0), _raio);
		glColor3ub(255,255,255);
		glScalef(1.0f, 0.5f, 1.0f);
		glutSolidSphere(((_raio / 5.0) * 2.0), (_raio * 10.0), (_raio * 10.0));
	
	glPopMatrix();


	/* ========== White Globe | Right ========== */
	
	glPushMatrix();
		
		glTranslatef(((_raio / 5.0) * 2.0), ((_raio / 5.0) * 2.0), _raio);
		glColor3ub(255,255,255);
		glScalef(1.0f, 0.5f, 1.0f);
		glutSolidSphere(((_raio / 5.0) * 2.0), (_raio * 10.0), (_raio * 10.0));
	
	glPopMatrix();


	
	/* ========== Black Glode | Left ========== */

	glPushMatrix();
	
		glTranslatef(-(_raio / (_raio * 1.25)), ((_raio * (23.0 / 20.0)) / _raio), _raio);
		glColor3ub(0,0,0);
		glScalef(1.0f, 0.5f, 1.0f);
		glutSolidSphere((_raio / 5), (_raio * 10), (_raio * 10));
	
	glPopMatrix();


	/* ========== Black Glode | Right ========== */
	
	glPushMatrix();
		
		glTranslatef((_raio / (_raio * 1.25)), ((_raio * (23.0 / 20.0)) / _raio), _raio);
		glColor3ub(0,0,0);
		glScalef(1.0f, 0.5f, 1.0f);
		glutSolidSphere((_raio / 5), (_raio * 10), (_raio * 10));
	
	glPopMatrix();
	
	/*boca*/
	glPushMatrix();
                    glTranslatef(0, ((_raio * (17.0 / 20.0))), ((_raio * (3/10))));
                    glColor3ub(0,0,0);
                    glScalef(1.f, 0.6f, 0.7f); 
                    glRotatef(-45.0, 0.0, 1.0, 0.0);
	                glRotatef(-90.0, 1.0, 0.0, 0.0);
                    glutSolidTorus(0.5, 0.5, 10, 20);
                glPopMatrix();
                
    glPushMatrix();
                    glTranslatef(0, ((_raio * (20.0 / 20.0))), ((_raio * (3/10))));
                    glColor3ub(204,0,0);
                    glScalef(1.f, 0.1f, 0.4f); 
                    glRotatef(-45.0, 0.0, 1.0, 0.0);
	                glRotatef(-90.0, 1.0, 0.0, 0.0);
                    glutSolidTorus(0.3, 0.3, 10, 20);
                glPopMatrix();
	
	glPopMatrix();
}
