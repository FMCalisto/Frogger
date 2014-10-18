#ifndef River_H
#define River_H


using namespace std;

#include <GL/glut.h>

#include"Entity.h"
#include"GameObject.h"
#include"StaticObject.h"


class River : public StaticObject{
	public:
		River();
		River(double x, double y, double z);
		~River();
		void ResetPosition(double x, double y, double z);
		double getX();
		void draw();
};
#endif 
