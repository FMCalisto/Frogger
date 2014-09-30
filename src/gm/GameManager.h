#ifndef GameManager_H
#define GameManager_H
#include<vector>
#include <GL/glut.h>

using namespace std;
 
class GameManager{
  /* private:
       vector<GameObject> _game_objects;
       vector<LightSource> _light_sources;
       vector<Camera> _cameras;*/
 
   public:
 
    GameManager();
    
    ~GameManager();

    void init(){};

    void display(){};

    void reshape( GLsizei w, GLsizei h){};

    void onTimer(int extra){}
     
};
#endif 

