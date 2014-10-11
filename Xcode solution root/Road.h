#ifndef Road_H
#define Road_H


using namespace std;

#if defined(__APPLE__) || defined(MACOSX)
    #include <GLUT/glut.h>
#else
    #include <GL/glut.h>
#endif

#include"Entity.h"
#include"GameObject.h"
#include"StaticObject.h"



class Road : public StaticObject{
	public:
		Road();
		~Road();
		void draw();
};
#endif 
