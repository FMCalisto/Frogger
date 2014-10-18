#include <vector>
#include <stdio.h>
#include <iostream>
#include <cstdlib>

#include <GL/glut.h>

#include "GameManager.h"
#include "Entity.h"
#include "GameObject.h"
#include "StaticObject.h"
#include "DynamicObject.h"
#include "Riverside.h"
#include "Roadside.h"
#include "Road.h"
#include "River.h"
#include "Frog.h"
#include "TimberLog.h"
#include "Vector3.h"
#include "Car.h"


#define DEBUG 1
#define eps 1e-12

using namespace std;

static vector<int> v(3);

static const int WALL_LEFT = -13;
static const int WALL_RIGHT = 13;
static const int WALL_TOP = 11;
static const int WALL_BOTTOM = -11;


/*
 * 	Car Collision
 */

bool CarCollided(Car* carro, Frog* ra)
{
    //NOTE: USES HARD-CODED FROG RADIUS AND SCALE3F PARAMETERS. NOT REUSABLE IF ANY
    //PARAMETER IS CHANGED. 
	
	double cxmin, cxmax, cymin, cymax, fxmin, fymin, fxmax, fymax;
	
	cxmin = carro->getPosX() - 2.0;
	cxmax = carro->getPosX() + 2.0;
	cymin = carro->getPosY() - 1.0;
	cymax = carro->getPosY() + 1.0;
	
	fxmin = ra->getPosX() - 1.4;
	fxmax = ra->getPosX() + 1.4;
	fymin = ra->getPosY() - 0.7;
	fymax = ra->getPosY() + 0.7;
	
	if(cxmax > fxmin && cxmin < fxmax && cymax > fymin && cymin < fymax)
	{
		return true;
	}
	else
	{
		return false;
	}
}


/*
 * 	TimberLog Collision
 */

bool TimberLogCollided(TimberLog* t, Frog* f)
{
	double txmin, txmax, tymin, tymax, fxmin, fymin, fxmax, fymax;
	
	txmin = t->getPosX() - 2.0;
	txmax = t->getPosX() + 2.0;
	tymin = t->getPosY() - 1.0;
	tymax = t->getPosY() + 1.0;
	
	fxmin = f->getPosX() - 1.4;
	fxmax = f->getPosX() + 1.4;
	fymin = f->getPosY() - 0.7;
	fymax = f->getPosY() + 0.7;
	
	if(txmax > fxmin && txmin < fxmax && tymax > fymin && tymin < fymax)
	{
		return true;
	}
	else
	{
		return false;
	}
}

 
GameManager::GameManager(int largura, int altura)
{
	/*
	 * 	Horizontal Car Positions
	 */
	
	v[0] = -3;
	v[1] = -5;
	v[2] = -7;
	
	_largura = largura;
	_altura = altura;
	
}
      
void GameManager::init()
{
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
	
	froggy = new Frog(2.0);
	carro1 = new Car(12,-3,1.5);
	tronco = new TimberLog(12,2.5,1);
	tronco2 = new TimberLog(8,7.5,1);
	
	_entidades[0] = (GameObject*) new Riverside();
	_entidades[1] = (GameObject*) new Roadside();
	_entidades[2] = (GameObject*) new Road();
	_entidades[3] = (GameObject*) new River();
	_entidades[4] = (DynamicObject*) new Frog(0);
	_entidades[5] = (DynamicObject*) new Frog(0);
   
}

double rotate_z = 0; 
double rotate_x = 0;


/*
 * 	Game Display
 * 
 * 	Where the Collision are conditioned.
 * 
 */

void GameManager::display(void)
{	
	glClearColor( 0, 0, 0, 1 );
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	
	int w = glutGet( GLUT_WINDOW_WIDTH );
	int h = glutGet( GLUT_WINDOW_HEIGHT );
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glScalef(20.0f, 20.f, 1.f);
	glPushMatrix();
	
	froggy->draw();
	carro1->draw();
	tronco->draw();
	tronco2->draw();
	
	for(int k = 0; k < 5; k++)
	{
		_entidades[k]->draw();
	}
	
	if(DEBUG)
	{
		puts("DRAWED ALL");
		cout << tronco->getX() << " AND AFTER: " << endl;
	}
	
	tronco->updateX(+0.05); 
	tronco2->updateX(+0.05);
	carro1->updateX(+0.10);
	
	if(DEBUG)
	{
		cout << tronco->getX() << endl;
		puts("CRASHES??");
	}
	
	if(carro1->getX() <=-12.6+eps and carro1->getX() >= -12.6-eps)
	{
		if(DEBUG)
		{
			puts("erased");
		}
		
		carro1->ResetPosition(12.,v[rand()%3],1.5);
	}
	
	
	if(tronco->getX() <=-16+eps and tronco->getX() >= -16-eps)
	{
		if(DEBUG)
		{
			puts("erased");
		}
		
		tronco->SetPosX(12.);//,-3,1.5);
		tronco->SetPosY(2.5);
	}
	
	if(tronco2->getX() <=-16+eps and tronco2->getX() >= -16-eps)
	{
		if(DEBUG)
		{
			puts("erased");
		}
		
		tronco2->SetPosX(12.);//,-3,1.5);
		tronco2->SetPosY(7.5);
	}
	
		
	if(DEBUG)
	{	
		cout <<"Frog: ( " << froggy->getPosX() << " , " << froggy->getPosY() << ") " << endl;
		cout <<"Car: ( " << carro1->getPosX() << " , " << carro1->getPosY() << ") " << endl;
	}

	if(CarCollided(carro1,froggy))
	{
		froggy->ResetPosition(0.0,0.0);
	}
	
	if(TimberLogCollided(tronco, froggy))
	{
		froggy->updateX(+0.05);
	}
	
	if(!TimberLogCollided(tronco, froggy) && ((froggy->getPosY() >= 1.68 - 10 * eps) && (froggy->getPosY() <= 8.96 - 10 * eps)))
	{
		froggy->ResetPosition(0.0, 0.0);
		puts("WATER");
	}
 
	glutSwapBuffers();
}
        
        
        
void GameManager::reshape( GLsizei w, GLsizei h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	glOrtho( -w/2.0, w/2.0, -h/2.0, h/2.0, -10, 10);
}


/*
 * 	Controller Camera
 */
    
void GameManager::specialKeys( int key, int x, int y ) 
{
	if (key == GLUT_KEY_RIGHT)
	{
		rotate_x -= 5;
	}
	else if (key == GLUT_KEY_LEFT)
	{
		rotate_x += 5;
	}
	else if (key == GLUT_KEY_UP)
	{
		rotate_z -= 5;
	}
	else if (key == GLUT_KEY_DOWN)
	{
		rotate_z += 5;
	}
	
	glPopMatrix();
	glutPostRedisplay();
}


/*
 * 	Controller Frog
 */
    
void GameManager::normalKeys(unsigned char key, int x, int y)
{
	//escape key
	switch(key)
	{
		case 'O':
		case 'o':
			if(froggy->getPosX() >= WALL_LEFT)
			{
				froggy->updateX(+0.56);
			}		 
		break;
		
		case 'P':
		case 'p':
			if(froggy->getPosX() <= WALL_RIGHT)
			{
				froggy->updateX(-0.56);
			}		 
		break;
		
		case 'Q':
		case 'q':
		if(froggy->getPosY() <= WALL_TOP)
		{		 
			froggy->updateY(-0.56);
		}
		 
		break;
		case 'A':
		case 'a':
		if(froggy->getPosY() >= WALL_BOTTOM)
		{
			froggy->updateY(+0.56);
		}
		
		break;
	}
}

  
      
 
