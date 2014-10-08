#ifndef Roadside_H
#define Roadside_H
/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#include <GL/glut.h>

#include"Entity.h"
#include"GameObject.h"
#include"StaticObject.h"

class Roadside: public StaticObject{
	public:	
		Roadside();
		~Roadside();
		void draw();
};
#endif 
