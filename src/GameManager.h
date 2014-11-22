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
#include "DynamicObject.h"
#include"Riverside.h"
#include"Roadside.h"
#include "Road.h"
#include "River.h"
#include "Frog.h"
#include "Car.h"
#include "TimberLog.h"
#include "Camera.h"
#include "Vector3.h"
#include "Camera.h"
#include "OrthogonalCamera.h"
#include "PerspectiveCamera.h"

#include "Luz.h"
#include "LuzDirecional.h"
#include "LuzSpotLight.h"

#define eps 1e-12



using namespace std;
 
class GameManager{
    private:
       //vector<GameObject> _entidades[5];
       /*vector<GameObject> _game_objects;
       vector<LightSource> _light_sources;
       vector<Camera> _cameras;*/
	   //vector <Entidade* _entidades[39];> * _game_objects;
	   static const double WALL_LEFT = -12;
       static const double WALL_RIGHT = 12;
       static const int WALL_TOP = 10;
       static const double WALL_BOTTOM = -10;
       Luz* _luzes[8];

       
       GameObject* _entidades[9];
       Camera* _camera;

       Frog* froggy;// = new Frog();
       Car* carro1;
      // TimberLog* tronco;
     //  TimberLog* tronco2;
       
    private:
        double w,h;
	    float _largura;
	    float _altura;
	    int tronco;
	    int _luz_activa;
	    int pausa;
	    bool HUDon;
	  
	    
   public:

 
    GameManager(int largura, int altura);
    
    ~GameManager();

    void init();

    void display();
    
    void update(int step);

    void reshape( GLsizei w, GLsizei h);

    void onTimer();
    
    void specialKeys( int key, int x, int y );
    
    void normalKeys(unsigned char key, int x, int y);
    
    void desenhaLuz();
    
    void changeLights(/*unsigned char key, int larg , int alt*/);
    
    void DisplayString( const int x, const int y,const std::string & label , const void * font = NULL);
    
    void HUD();
     
};
#endif 
