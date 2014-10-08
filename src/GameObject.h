#ifndef GameObject_H
#define GameObject_H
#include"Entity.h"
#include "Vector3.h"


//using namespace std;


class GameObject : public Entity {
	protected:
	Vector3 pos;
	public:		
		GameObject();
		~GameObject();

	    virtual void draw() = 0;

		void update(double delta_t);
};
#endif 
