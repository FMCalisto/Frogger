/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#include <GL/glut.h>


#include "DynamicObject.h"
//#include <GL/glut.h>

using namespace std;




		DynamicObject::DynamicObject(){
		
		}
		
		double DynamicObject::getSpeed(){return _speedX;}
		void DynamicObject::SetSpeed(double speed){_speedX=speed;}
		
/*		~DynamicObject::DynamicObject(){
		
		}*/
		
		void DynamicObject::update(double delta_t){
			SetSpeed(_speedX+delta_t);
		}

