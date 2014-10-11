#ifndef Frog_H
#define Frog_H


using namespace std;

#if defined(__APPLE__) || defined(MACOSX)
    #include <GLUT/glut.h>
#else
    #include <GL/glut.h>
#endif

#include"Entity.h"
#include"GameObject.h"
#include"DynamicObject.h"



class Frog : public DynamicObject{
	float _raio;
	public:
		Frog();
		Frog(float _raio) ;//{___raio=__raio;}
		~Frog();
		void draw();
};
#endif 
