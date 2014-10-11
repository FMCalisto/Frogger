#include "Entity.h"

#if defined(__APPLE__) || defined(MACOSX)
    #include <GLUT/glut.h>
#else
    #include <GL/glut.h>
#endif

#include <vector>

#include "Vector3.h"

using namespace std;
 

 
      Entity::Entity(){
      
      }

      Entity::~Entity(){
      
      }
      
     Vector3* Entity::getPosition(){
      return _position;
      }
     



