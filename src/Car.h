#ifndef Car_H
#define Car_H


using namespace std;

#include <GL/glut.h>

#include"Entity.h"
#include"GameObject.h"
#include"DynamicObject.h"



class Car : public DynamicObject{
	public:
		Car();
		Car(double x, double y, double z); //the position is passed as parameter
		~Car();
		void ResetPosition(double x, double y, double z);
		double getX();
		void draw();
};
#endif  
