/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#include<vector>
#include<stdio.h>
#include <iostream>
#include <cstdlib>

#include "GameManager.h"



#include <GL/glut.h>
#define DEBUG 0

using namespace std;
#define eps 1e-12
static vector<int> v(3);

bool Collided(Car* carro, Frog* ra)
{
    //NOTE: USES HARD-CODED FROG RADIUS AND SCALE3F PARAMETERS. NOT REUSABLE IF ANY
    //PARAMETER IS CHANGED. 
	double cxmin, cxmax, cymin, cymax, fxmin, fymin, fxmax, fymax;
	cxmin=carro->getPosX()-2.0;
	cxmax=carro->getPosX()+2.0;
	cymin=carro->getPosY()-1.0;
	cymax=carro->getPosY()+1.0;
	fxmin=ra->getPosX()-1.4;
	fxmax=ra->getPosX()+1.4;
	fymin=ra->getPosY()-0.7;
	fymax=ra->getPosY()+0.7;
	if(cxmax > fxmin && cxmin < fxmax && cymax > fymin && cymin < fymax)
	return true;
	else
	return false;
}

bool Collided2(Frog* ra, TimberLog* tronco)
{
    double txmin, txmax, tymin, tymax, fxmin, fymin, fxmax, fymax;
	txmin=tronco->getPosX()-2.0;
	txmax=tronco->getPosX()+2.0;
	tymin=tronco->getPosY()-1.0;
	tymax=tronco->getPosY()+1.0;
	fxmin=ra->getPosX()-1.4;
	fxmax=ra->getPosX()+1.4;
	fymin=ra->getPosY()-0.7;
	fymax=ra->getPosY()+0.7;
	if(txmax > fxmin && txmin < fxmax && tymax > fymin && tymin < fymax)
	return true;
	else
	return false;
}
 
    GameManager::GameManager(int largura, int altura){
		v[0]=-3;
		v[1]=-5;
		v[2]=-7;
    	_largura = largura;
	    _altura = altura;
	    _camera;
		
    }
      
    void GameManager::init(){
        glEnable(GL_DEPTH_TEST);
        glEnable(GL_LIGHTING);
        glEnable(GL_LIGHT0);
        glEnable(GL_COLOR_MATERIAL);

        w = glutGet( GLUT_WINDOW_WIDTH );
        h = glutGet( GLUT_WINDOW_HEIGHT );

        
        _camera = new OrthogonalCamera(-w/2.0, w/2.0, -h/2.0, h/2.0, -10, 10);

        _entidades[0] = (GameObject*) new Riverside();
        _entidades[1] = (GameObject*) new Roadside();
        _entidades[2] = (GameObject*) new Road();
        _entidades[3] = (GameObject*) new River();
        _entidades[4] = (DynamicObject*) new Frog(2.0);
        _entidades[5] =(DynamicObject*) new Car(12,-3,1.5);
        _entidades[6] =(DynamicObject*) new TimberLog(12,2.5,1);
        _entidades[7] =(DynamicObject*) new TimberLog(8,7.5,1);
       
    }
double rotate_z = 0; 
double rotate_x = 0;


    void GameManager::display(void){
      
        glClearColor( 0, 0, 0, 1 );
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

		/*_entidades[4]->draw();
		carro1->draw();
		tronco->draw();
		tronco2->draw(); */
        for(int k = 0; k < 8; k++){
		            _entidades[k]->draw();
		}
	    glutSwapBuffers();
    }
    
    void GameManager::update(){
       
 
       
       for(int k = 5; k < 8; k++){
                    _entidades[k]->updateX(-0.10);
		            _entidades[k]->draw();
		            if(_entidades[k]->getX() <=-16+eps and _entidades[k]->getX() >= -16-eps)
		                _entidades[k]->ResetPosition(12,v[rand()%3],1.5);
		}                                         
        	
	    if(Collided((Car*)_entidades[5], (Frog*)_entidades[4])){
	        _entidades[4]->ResetPosition(0.0,-10.0, 0.0);
	        _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
	    }
	    
	    bool surf = false;
	    
	    for(int k = 6; k < 8; k++){
	        if(Collided2((Frog*)_entidades[4], (TimberLog*)_entidades[k])){
		        surf = true;
		    }
		   /* if(!Collided2((Frog*)_entidades[4], (TimberLog*)_entidades[k]) && _entidades[4]->getPosY()>=1.68-10*eps){
	            _entidades[4]->ResetPosition(0.0,0.0,0.0);
	        }*/
		}
		
		if( surf == false && _entidades[4]->getPosY()>=1.68-10*eps){
		    _entidades[4]->ResetPosition(0.0,0.0,0.0);
		     _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
		}if( surf == true){
		    _entidades[4]->updateX(-0.10);
		     _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);   
		}

    }
    
    
    
    void GameManager::reshape( GLsizei w, GLsizei h){
        _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
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
             glPopMatrix();
        glutPostRedisplay();
    }
    
    void GameManager::normalKeys(unsigned char key, int x, int y)
    {
		//escape key
	switch(key)
	{
        case '1':
     
            _camera = new OrthogonalCamera(-w/2.0, w/2.0, -h/2.0, h/2.0, -10, 10);
        break;
        case '2':
      
            _camera = new PerspectiveCamera(0, 0, 10, 0, 1, 1,0.0,20.0,3.0,4.0);
        break;
        case '3' :
            _camera = new PerspectiveCamera(_entidades[4]->getPosX(), _entidades[4]->getPosY(), 2, 0, 1, 0,-15.0,5.0,3.0,4.0);
        break;
	    case 'O':
		case 'o':
		 
		 if(_entidades[4]->getPosX() >= WALL_LEFT){
		    _entidades[4]->updateX(-0.76);
		    _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
		    }

		 //cout << _entidades[4]->_speedX << endl;
		break;
		case 'P':
		case 'p':
		 
		if(_entidades[4]->getPosX() <= WALL_RIGHT){
		    _entidades[4]->updateX(+0.76);
		    _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
		    }

		 //cout << _entidades[4]->_speedX << endl;
		break;
		case 'Q':
		case 'q':
		 
	    if(_entidades[4]->getPosY() <= WALL_TOP){
    		 _entidades[4]->updateY(+0.76);
    		 _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
    		 }
		 //cout << _entidades[4]->_speedX << endl;
		break;
		case 'A':
		case 'a':
		 
		if(_entidades[4]->getPosY() >= WALL_BOTTOM){
		    _entidades[4]->updateY(-0.76);
		    _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
		    }
		 //cout << _entidades[4]->_speedX << endl;
		break;
	}
}

  
      
 
