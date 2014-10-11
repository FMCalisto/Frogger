#ifndef River_H
#define River_H


using namespace std;

#if defined(__APPLE__) || defined(MACOSX)
    #include <GLUT/glut.h>
#else
    #include <GL/glut.h>
#endif

#include"Entity.h"
#include"GameObject.h"
#include"StaticObject.h"


class River : public StaticObject{
	public:
		River();
		~River();
		void draw();
};
#endif 
