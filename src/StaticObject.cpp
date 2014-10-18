/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#include <GL/glut.h>


#include "StaticObject.h"
//#include <GL/glut.h>

using namespace std;




StaticObject::StaticObject()
{

}

/*~StaticObject::StaticObject()
{

}*/

double StaticObject::getPosX(){return _pos.getX()/*_speedX*/;}
double StaticObject::getPosY(){return _pos.getY()/*_speedX*/;}
double StaticObject::getPosZ(){return _pos.getZ()/*_speedX*/;}
