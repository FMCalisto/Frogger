#ifndef TimberLog_H
#define TimberLog_H


using namespace std;

#include <GL/glut.h>

#include"Entity.h"
#include"GameObject.h"
#include"DynamicObject.h"


class TimberLog : public DynamicObject {
	public:
		TimberLog();
		TimberLog(double x, double y, double z);
		~TimberLog();
		void ResetPosition(double x, double y, double z);
		double getX();
		void draw();
};
#endif 

