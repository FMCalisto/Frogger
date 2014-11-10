#ifndef Poligono_H
#define Poligono_H


using namespace std;

#include <GL/glut.h>

#include"Entity.h"
#include"GameObject.h"
#include"materials.h"

class Poligono{
	public:
	    double _comp;
	    double _larg;
	    double _posx;
	    double _posy;
	    double _posz;
		Poligono();
		~Poligono();
		void draw(double optional=1);
		void setDim(int larg, int comp);
		void setPos(double posx,double posy, double posz);
		//void setColor(
};
#endif 
