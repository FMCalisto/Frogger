#ifndef FROG_H
#define FROG_H

#include "DynamicObject.h"

class Frog : public DynamicObject
{
	public:
		Frog();
		Frog(double x, double y, double z);
		
		~Frog();

		void draw();
};

#endif
