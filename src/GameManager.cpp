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
   	    static vector<int> v(3);
        int old_step = 0;
        double deltaT;

bool Collided(GameObject* carro, Frog* ra)
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

/*bool Collided2(Frog* ra, TimberLog* tronco)
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
}*/
 
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
       // glEnable(GL_LIGHT0);
      glEnable(GL_COLOR_MATERIAL);
        //glEnable(GL_COLOR);

        w = glutGet( GLUT_WINDOW_WIDTH );
        h = glutGet( GLUT_WINDOW_HEIGHT );

        
        _camera = new OrthogonalCamera(-w/2.0, w/2.0, -h/2.0, h/2.0, -10, 10);

        _entidades[0] = (GameObject*) new Riverside();
        _entidades[1] = (GameObject*) new Roadside();
        _entidades[2] = (GameObject*) new Road();
        _entidades[3] = (GameObject*) new River();
        _entidades[4] = (DynamicObject*) new Frog(2.0);
        _entidades[5] =(DynamicObject*) new Car(12,-3,1.5);
        _entidades[6] =(DynamicObject*) new TimberLog(12+rand()%3,2.5,1);
        _entidades[7] =(DynamicObject*) new TimberLog(12+rand()%3,5.0,1);
        _entidades[8] =(DynamicObject*) new TimberLog(12+rand()%3,7.5,1);
        
        _luzes[0] =(LuzDirecional*) new LuzDirecional(0.0,0.0,1.0);
	    _luzes[1] =(LuzSpotLight*) new LuzSpotLight(-14,10,6.0);
	    _luzes[2] =(LuzSpotLight*) new LuzSpotLight(14,10,6.0);
	    _luzes[3] =(LuzSpotLight*) new LuzSpotLight(-14,0,6.0);
	    _luzes[4] =(LuzSpotLight*) new LuzSpotLight(14,0,6.0);
	    _luzes[5] =(LuzSpotLight*) new LuzSpotLight(-14,-10,8.0);
	    _luzes[6] =(LuzSpotLight*) new LuzSpotLight(14,-10,8.0);
	    _luzes[7] =(LuzSpotLight*) new LuzSpotLight(0,-10,3, 0, 1, -1);
	    
	    _luzes[0]->setStateLight(1);

	    _luz_activa = 1;
	    pausa = 0;
	    HUDon = false;
	    
	    if ( HUDon == true )
		    HUD();  
	 /*   _luzes[0]->setStateLight(0);*/
        
       
    }
double rotate_z = 0; 
double rotate_x = 0;

void GameManager::HUD(){

	glDisable( GL_LIGHTING);

	glMatrixMode( GL_PROJECTION);
	glPushMatrix();
	glLoadIdentity();
	gluOrtho2D( 0, glutGet( GLUT_WINDOW_WIDTH), 0, glutGet( GLUT_WINDOW_HEIGHT));
	glMatrixMode( GL_MODELVIEW);
	glLoadIdentity();

	//mostrar os comandos
	glColor3ub(0,102,0);
	DisplayString( 1024/2, 720/2, "lala");
	DisplayString( 1024/2, 720/2, "lala");

   	glMatrixMode( GL_PROJECTION);
	glPopMatrix();
	glEnable( GL_LIGHTING);

}


void GameManager::changeLights(/*unsigned char value, int larg, int alt*/){
	float x = _entidades[4]->getPosX();
	float y = _entidades[4]->getPosY();
	/*if(value == '5'){*/
		/*if(_luzes[1]->isActivate() == 1)
			_luzes[1]->setStateLight(0);
		_luzes[0]->setStateLight(1);
		glutPostRedisplay();*/
	/*}
	else if(value == '6'){*/
		if(_luzes[0]->isActivate() == 1)
			puts("puta");//_luzes[0]->setStateLight(0);
		/*_luzes[1]->setSStateLight(1);
		glutPostRedisplay();*/
	/*}
	else if(value == '7'){
		_luzes[0]->setStateLight(0);
		_luzes[1]->setStateLight(0);
		GLfloat totalDarkness[] = {0.0, 0.0, 0.0, 1.0};
		glLightModelfv(GL_LIGHT_MODEL_AMBIENT, totalDarkness);
		desenhaLuz();
		desenha();
		refreshScreen(_largura,_altura);
		glutPostRedisplay();
	}*/
}

void GameManager::desenhaLuz(){

    if( _luz_activa == 1){
	    for(int i = 0; i < 8; i++)
		    if(_luzes[i]->isActivate() == 1){
			    _luzes[i]->refresh();
		    }
	    glutPostRedisplay();
    }else{
        puts("Escapa desenhaLuz");
    }
}


    void GameManager::display(void){
      
        glClearColor( 0, 0, 0, 1 );
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);


        for(int k = 0; k <9; k++){
		          //  _entidades[k]->draw();
		}
		//desenhaLuz();
		
		
	    glutSwapBuffers();
    }
    
    void GameManager::update(int step){
 
 
if( pausa == 0){
 
        deltaT =( (double) ((step-old_step)));
	
       for(int k = 5; k < 9; k++){
            _entidades[k]->updateX((deltaT/1000.0));
            //_entidades[k]->draw();
            if(_entidades[k]->getX() <=-16+eps) // _entidades[k]->getX() >= -16-eps)
                _entidades[k]->ResetPosition(12,v[rand()%3],1.5);
		}                                         
        	
	    if(Collided((Car*)_entidades[5], (Frog*)_entidades[4])){
	        _entidades[4]->ResetPosition(0.0,-10.0, 0.0);
	        _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
	    }
	    
	    bool surf = false;
	    
	    for(int k = 6; k < 9; k++){
	        if(Collided( _entidades[k],(Frog*)_entidades[4])){
	            tronco = k;
		        surf = true;
		    }
		   
		}
		
		if( surf == false && _entidades[4]->getPosY()>=1.68/*-10*eps*/ && _entidades[4]->getPosY()<=10-1.68 ){
		    _entidades[4]->ResetPosition(0.0,-10.0,0.0);
		     _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
		    
		}if( surf == true){
	        if(_entidades[4]->getPosX() >= WALL_LEFT){
		        _entidades[4]->updateXTRONCO(  (deltaT/1000.0) * _entidades[tronco]->getSpeedX());
		        _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
		        _luzes[7]->updateCenter(_entidades[4]->getPosX(), _entidades[4]->getPosY(), 3);
		  }
		}
    desenhaLuz();
	old_step=step;

    }
    
    if ( HUDon == true )
		HUD();  
    
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

        glutPostRedisplay();
    }
    
    
void GameManager::DisplayString( const int x, const int y, const std::string & label, const void * font){
    void * fontToUse = (font != NULL) ? (void*) font : GLUT_BITMAP_HELVETICA_12;
    glRasterPos2i(x, y);
    for ( int i=0; i<label.size(); i++)
        glutBitmapCharacter( fontToUse, label[i]);
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
		    _entidades[4]->updateXTECLA(deltaT/55.0);
		    _entidades[4]->setRotacao(90);
		    _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
		    _luzes[7]->updateDirection(-1,0,-1);
		    _luzes[7]->updateCenter(_entidades[4]->getPosX(), _entidades[4]->getPosY(), 3);
		    }


		break;
		case 'P':
		case 'p':
		 
		if(_entidades[4]->getPosX() <= WALL_RIGHT){
		    _entidades[4]->updateXTECLA(/*(1*old_step%10)/100.0*/-deltaT/55.0);
		    _entidades[4]->setRotacao(-90);
		    _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
		    _luzes[7]->updateDirection(1, 0, -1);
		    _luzes[7]->updateCenter(_entidades[4]->getPosX(), _entidades[4]->getPosY(), 3);
		    }

		break;
		case 'Q':
		case 'q':
	    if(_entidades[4]->getPosY() <= WALL_TOP){
    		 _entidades[4]->updateY(deltaT/55.0);    		 
    		 _entidades[4]->setRotacao(0);
    		 _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
    		 _luzes[7]->updateDirection(0, 1, -1);
    		 _luzes[7]->updateCenter(_entidades[4]->getPosX(), _entidades[4]->getPosY(), 3);
    		 }

		break;
		
		case 'A':
		case 'a':	

		if(_entidades[4]->getPosY() >= WALL_BOTTOM){

		    _entidades[4]->updateY(/*(-1*old_step%10)/100.0-0.6*/-deltaT/55.0);
		    _entidades[4]->setRotacao(-180);
		    _camera->update(w,h, _entidades[4]->getPosX(), _entidades[4]->getPosY(), 2);
		    _luzes[7]->updateDirection(0, -1, -1);
		    _luzes[7]->updateCenter(_entidades[4]->getPosX(), _entidades[4]->getPosY(), 3);
		    }

		break;
		
		case 'N':
		case 'n':
		        if(_luzes[0]->isActivate() == 1){
		            _luzes[0]->setStateLight(0);
		            /*GLfloat totalDarkness[] = {1.0, 1.0, 1.0, 1.0};
		            glLightModelfv(GL_LIGHT_MODEL_AMBIENT, totalDarkness);
		            glutPostRedisplay();*/
		        }else{
		            _luzes[0]->setStateLight(1);
		        }		    
	        glutPostRedisplay();
        break;
        
        case 'C':
		case 'c':
		    for(int kl = 1;kl < 8; kl++){
		        if(_luzes[kl]->isActivate() == 1)
		            _luzes[kl]->setStateLight(0);
		        else
		            _luzes[kl]->setStateLight(1);
		    }		    
	        glutPostRedisplay();
        break;
        
        case 'l':
		case 'L':
		    if(_luz_activa == 1)
		            _luz_activa = 0;
		        else
		           _luz_activa = 1;
        break;
        
        case 's':
		case 'S':
		
		glColor3ub(153,153,255);
        DisplayString( 1024/2, 720/2, "IR_AS_PUTAS");
		    if(pausa == 0)
		            pausa = 1;
		        else
		           pausa = 0;
        break;
        
        case 'H':
		case 'h':
	        if(_luzes[7]->isActivate() == 1)
	            _luzes[7]->setStateLight(0);
	        else
	            _luzes[7]->setStateLight(1);    
	        glutPostRedisplay();
        break;
	}
}



  
      
 
