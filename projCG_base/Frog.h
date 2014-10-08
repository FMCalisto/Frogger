#ifndef Frog_H
#define Frog_H


using namespace std;

#include <GL/glut.h>

#include"Entity.h"
#include"GameObject.h"
#include"DynamicObject.h"



class Frog : public DynamicObject{
	public:
		Frog();
		~Frog();
		void draw();
};
#endif 
