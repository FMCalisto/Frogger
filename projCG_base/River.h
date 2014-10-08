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
		~River();
		void draw();
};
#endif 
