#ifndef GameManager_H
#define GameManager_H

#include <vector>

#if defined(__APPLE__) || defined(MACOSX)
    #include <GLUT/glut.h>
#else
    #include <GL/glut.h>
#endif

#include"Entity.h"
#include"GameObject.h"
#include"StaticObject.h"
#include"Riverside.h"
#include"Roadside.h"
#include "Frog.h"
#include "Car.h"


using namespace std;
 
class GameManager{
    private:
       GameObject* _entidades[6];
       Car* carro1;
       
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
