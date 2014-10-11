#ifndef Trunk_H
#define Trunk_H


using namespace std;

#if defined(__APPLE__) || defined(MACOSX)
    #include <GLUT/glut.h>
#else
    #include <GL/glut.h>
#endif

#include"Entity.h"
#include"GameObject.h"
#include"DynamicObject.h"



class Trunk : public DynamicObject{
	public:
		Trunk();
		Trunk(double x, double y, double z); //the position is passed as parameter
		~Trunk();
		double getX();
		void draw();
};
#endif  
