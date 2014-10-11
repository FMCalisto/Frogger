#ifndef GameObject_H
#define GameObject_H
#include"Entity.h"
#include "Vector3.h"


//using namespace std;


class GameObject : public Entity {
	protected:
	double speedX,speedY;
	Vector3 pos;
	public:		
		GameObject();
		~GameObject();

	    virtual void draw() = 0;

		void updateX(double delta_t);
		void updateY(double delta_t);
};
#endif 
