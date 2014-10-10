#ifndef GameManager_H
#define GameManager_H
/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#include<vector>
#include <GL/glut.h>

/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#include"Entity.h"
#include"GameObject.h"
#include"StaticObject.h"
#include"Riverside.h"
#include"Roadside.h"
#include "Frog.h"


using namespace std;
 
class GameManager{
    private:
       //vector<GameObject> _entidades[5];
       /*vector<GameObject> _game_objects;
       vector<LightSource> _light_sources;
       vector<Camera> _cameras;*/
	   //vector <Entidade* _entidades[39];> * _game_objects;
       GameObject* _entidades[6];
       Frog* froggy;// = new Frog();
       
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
