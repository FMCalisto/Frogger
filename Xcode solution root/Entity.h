#ifndef Entity_H
#define Entity_H

#include "Vector3.h"

#include<vector>

using namespace std;
 
class Entity{
   protected:
     Vector3* _position;
 
   public: 
 
      Entity();

      ~Entity();
      
      Vector3* getPosition();
}; 
#endif 
