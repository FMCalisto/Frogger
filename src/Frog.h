#ifndef Frog_H
#define Frog_H


using namespace std;

#include <GL/glut.h>

#include"Entity.h"
#include"GameObject.h"
#include"DynamicObject.h"



class Frog : public DynamicObject{
	float _raio;
	public:
		Frog();
		Frog(float _raio) ;//{___raio=__raio;}
		~Frog();
		void draw();
		void ResetPosition(double x, double y, double z);
		double getXRaio();
		//void updateX(double delta_t);
		//void updateY(double delta_t);
		/*double getPosX();
		double getPosY();
		double getPosZ(); */
};
#endif 
