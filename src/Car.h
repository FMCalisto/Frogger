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
		~Car();
		void draw();
};
#endif  
