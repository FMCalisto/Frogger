/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#include<vector>
#include<stdio.h>
#include <iostream>
#include <cstdlib>

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
#include"Car.h"

#include <GL/glut.h>
#define DEBUG 1

using namespace std;
#define eps 1e-12
static vector<int> v(3);
 
    GameManager::GameManager(int largura, int altura){
		v[0]=-3;
		v[1]=-5;
		v[2]=-7;
    	_largura = largura;
	    _altura = altura;
		
    }
      
    void GameManager::init(){
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
        _entidades[5] =(DynamicObject*) new Frog(0);
       
    }
    double rotate_z = 0; 
double rotate_x = 0;
    void GameManager::display(void){
       /* glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glMatrixMode(GL_PROJECTION);
        glOrtho(-100.0, 100.0, -100.0, 100.0, 1.0, -1.0);
        glLoadIdentity();
        GLint viewport[4];
        glGetIntegerv(GL_VIEWPORT, viewport);
        double aspect = (double)viewport[2] / (double)viewport[3];
        gluPerspective(60, aspect, 1, 100);

        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();

        // move back a bit
        glTranslatef( 0, 0, -35 );
      
        for(int k = 0; k < 5; k++)
		    _entidades[k]->draw();*/
        glClearColor( 0, 0, 0, 1 );
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

        glMatrixMode( GL_PROJECTION );
        glLoadIdentity();
        int w = glutGet( GLUT_WINDOW_WIDTH );
        int h = glutGet( GLUT_WINDOW_HEIGHT );
        gluPerspective( 100, w / h, 0.1, 100 );

        glMatrixMode( GL_MODELVIEW );
        glLoadIdentity();
        gluLookAt
            ( 
            0,0, 20, 
            0, 0, 0,
            0, 1, 1
            );

        glRotatef( rotate_z, 1.0, 0.0, 0.0 );
        glRotatef( rotate_x, 0.0, 0.0, 1.0); 
		
		froggy->draw();
		carro1->draw();
		tronco->draw();
		tronco2->draw();
        for(int k = 0; k < 6; k++){
		            _entidades[k]->draw();
		            }

	puts("DRAWED ALL");
	cout << tronco->getX() << " AND AFTER: " << endl;
    tronco->updateX(+0.05); 
    tronco2->updateX(+0.05);
	carro1->updateX(+0.10);
cout << tronco->getX() << endl;
	puts("CRASHES??");
	
		if((carro1->getX() <=-12+eps)and(carro1->getX() >= -12-eps)){
		if(DEBUG)
		puts("erased");
		carro1->ResetPosition(12.,v[rand()%3],1.5);
		 //carro1->_pos.set(12.,v[rand()%3],0);//,-3,1.5);
		 //carro1->SetPosY(v[rand()%3]);
	}
	
	
		if(tronco->getX() <=-16+eps and tronco->getX() >= -16-eps){
		if(DEBUG)
		puts("erased");
		 tronco->SetPosX(12.);//,-3,1.5);
		 tronco->SetPosY(2.5);
	}
	
	if(tronco2->getX() <=-16+eps and tronco2->getX() >= -16-eps){
		if(DEBUG)
		puts("erased");
		 tronco2->SetPosX(12.);//,-3,1.5);
		 tronco2->SetPosY(7.5);
	}
	
                glutSwapBuffers();
        }
    void GameManager::reshape( GLsizei w, GLsizei h){
        glViewport(0, 0, w, h);
    }
    
    void GameManager::specialKeys( int key, int x, int y ) 
    {
        if (key == GLUT_KEY_RIGHT)
            rotate_x -= 5;
        else if (key == GLUT_KEY_LEFT)
            rotate_x += 5;
        else if (key == GLUT_KEY_UP)
            rotate_z -= 5;
        else if (key == GLUT_KEY_DOWN)
            rotate_z += 5;
        glutPostRedisplay();
    }
    
    void GameManager::normalKeys(unsigned char key, int x, int y)
    {
		//escape key
	switch(key)
	{
		case 'o':
		 //_entidades[4]->updateX(-0.76);
		 froggy->updateX(-0.56);
		 //cout << _entidades[4]->_speedX << endl;
		break;
		case 'p':
		 //_entidades[4]->updateX(+0.76);
		 froggy->updateX(+0.56);
		 //cout << _entidades[4]->_speedX << endl;
		break;
		case 'q':
		 //_entidades[4]->updateY(+0.76);
		 froggy->updateY(+0.56);
		 //cout << _entidades[4]->_speedX << endl;
		break;
		case 'a':
		 //_entidades[4]->updateY(-0.76);
		 froggy->updateY(-0.56);
		 //cout << _entidades[4]->_speedX << endl;
		break;
	}
}

  
      
 
