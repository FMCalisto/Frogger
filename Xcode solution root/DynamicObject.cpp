/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#if defined(__APPLE__) || defined(MACOSX)
    #include <GLUT/glut.h>
#else
    #include <GL/glut.h>
#endif


#include "DynamicObject.h"

using namespace std;




		DynamicObject::DynamicObject(){
		
		}
		
		void DynamicObject::SetPosX(double x){_x=x;}
		void DynamicObject::SetPosY(double y){_y=y;}
		void DynamicObject::SetPosZ(double z){_z=z;}
		
		double DynamicObject::getSpeedX(){return _speedX;}
		void DynamicObject::SetSpeedX(double speed){_speedX=speed;}
	
		double DynamicObject::getSpeedY(){return _speedY;}
		void DynamicObject::SetSpeedY(double speed){_speedY=speed;}
		
		DynamicObject::~DynamicObject(){
		}
		
		void DynamicObject::updateX(double delta_t){
			SetSpeedX(_speedX+delta_t);
			SetPosX(_x-(delta_t));
		}
		
		void DynamicObject::updateY(double delta_t){
			SetSpeedY(_speedY+delta_t);
			SetPosY(_y-(delta_t));
		}

