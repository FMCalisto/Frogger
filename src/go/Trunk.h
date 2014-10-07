#ifndef TRUK_H
#define TRUK_H

#include "DynamicObject.h"

class Truk : public DynamicObject
{
	public:
		Truk();
		Truk(double x, double y, double z);
		
		~Truk();

		void draw();
};

#endif
