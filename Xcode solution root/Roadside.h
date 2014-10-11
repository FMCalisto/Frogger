#ifndef Roadside_H
#define Roadside_H

#if defined(__APPLE__) || defined(MACOSX)
    #include <GLUT/glut.h>
#else
    #include <GL/glut.h>
#endif

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
