#ifndef GameManager_H
#define GameManager_H

#include<vector>

#include <GL/glut.h>

#include "Entity.h"
#include "GameObject.h"
#include "StaticObject.h"
#include "Riverside.h"
#include "Roadside.h"
#include "Frog.h"
#include "Car.h"
#include "TimberLog.h"


using namespace std;
 
class GameManager
{
    private:
       GameObject* _entidades[6];
       Frog* froggy;
       Car* carro1;
       TimberLog* timberlog1;
       TimberLog* timberlog2;
       TimberLog* timberlog3;
       
    private:
	    float _largura;
	    float _altura;
	  
	    
   public:
 
    GameManager(int largura, int altura);
    
    ~GameManager();

    void init();

    void display();

    void reshape( GLsizei w, GLsizei h);

    void onTimer();
    
    void specialKeys( int key, int x, int y );
    
    void normalKeys(unsigned char key, int x, int y);
     
};
#endif 
