#ifndef Poligono_H
#define Poligono_H


using namespace std;

#include <GL/glut.h>

#include"Entity.h"
#include"GameObject.h"
#include"materials.h"

class Poligono{
	public:
	    int _comp;
	    int _larg;
	    int _posy;
		Poligono();
		~Poligono();
		void draw();
		void setDim(int larg, int comp);
		void setPos(int posy);
		//void setColor(
};
#endif 
