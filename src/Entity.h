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
      
    /*  Vector3* setPosition(double in_x, double in_y, double in_z);
      
      Vector3* getPosition( const Vector3 &in_p);*/
}; 
#endif 
