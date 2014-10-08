#ifndef GameObject_H
#define GameObject_H

#include"Entity.h"


//using namespace std;


class GameObject : public Entity {
	public:		
		GameObject();
		~GameObject();

	    virtual void draw() = 0;

		void update(double delta_t);
};
#endif 
