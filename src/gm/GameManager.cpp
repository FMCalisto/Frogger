#include <vector>

#include "gm/GameManager.h"

using namespace std;
 
class GameManager::GameManager{
   private:
       vector<GameObject> _game_objects;
       vector<LightSource> _light_sources;
       vector<Camera> _cameras;
 
   public:
 
      GameManager(){
            
      }
      
      ~GameManager(){
            //DESTROY
      }
 
      GameManager display(){
      
      }
      
      GameManager reshape()(GLsizei w, GLsizei h){
            
      }
      
      GameManager keyPressed(){
      
      }
      
      GameManager onTimer(){
      
      }
      
      GameManager idle(){
      
      }
      
      GameManager update(){
      
      }
      
      GameManager init(){
      
      }
      
}; 
