#ifndef Road_H
#define Road_H


using namespace std;

#include <GL/glut.h>

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
