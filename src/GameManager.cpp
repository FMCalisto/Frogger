/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#include<vector>
#include<stdio.h>

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
#include "Vector3.h"
#include"Car.h"

#include <GL/glut.h>

using namespace std;
 
    GameManager::GameManager(int largura, int altura){
    	_largura = largura;
	    _altura = altura;
		
    }
      
    void GameManager::init(){
        glEnable(GL_DEPTH_TEST);
        glEnable(GL_LIGHTING);
        glEnable(GL_LIGHT0);
        glEnable(GL_COLOR_MATERIAL);
        _entidades[0] = (GameObject*) new Riverside();
        _entidades[1] = (GameObject*) new Roadside();
        _entidades[2] = (GameObject*) new Road();
        _entidades[3] = (GameObject*) new River();
        _entidades[4] = (GameObject*) new Frog();
        _entidades[5] = (GameObject*) new Car();
       
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

        for(int k = 0; k < 6; k++)
		            _entidades[k]->draw();

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

  
      
 
