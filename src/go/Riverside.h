#ifndef Riverside_H
#define Riverside_H


using namespace std;

#include"Entity.h"
#include"GameObject.h"
#include"StaticObject.h"



class Riverside : public StaticObject{
	public:
		Riverside();
		~Riverside();
		void draw();
};
#endif 
