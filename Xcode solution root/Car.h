#ifndef Car_H
#define Car_H


using namespace std;

#if defined(__APPLE__) || defined(MACOSX)
    #include <GLUT/glut.h>
#else
    #include <GL/glut.h>
#endif

#include"Entity.h"
#include"GameObject.h"
#include"DynamicObject.h"



class Car : public DynamicObject{
	public:
		Car();
		Car(double x, double y, double z); //the position is passed as parameter
		~Car();
		double getX();
		void draw();
};
#endif  
