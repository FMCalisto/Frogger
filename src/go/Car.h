#ifndef CAR_H
#define CAR_H

#include "DynamicObject.h"


class Car : public DynamicObject
{
	public:
		Car();
		Car(double x, double y, double z);

		~Car();

		void draw();
};

#endif
