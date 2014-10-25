
/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#include <GL/glut.h>


#include "DynamicObject.h"
#include <iostream>
//#include <GL/glut.h>

using namespace std;




		DynamicObject::DynamicObject(){
		
		}
		
		void DynamicObject::SetPosX(double x){_pos.set(x,_pos.getY(),_pos.getZ())/*_x=x*/;}
		void DynamicObject::SetPosY(double y){_pos.set(_pos.getX(),y,_pos.getZ())/*_y=y*/;}
		void DynamicObject::SetPosZ(double z){_pos.set(_pos.getX(),_pos.getY(),z)/*_z=z*/;}
		
		double DynamicObject::getPosX(){return _pos.getX()/*_speedX*/;}
		double DynamicObject::getPosY(){return _pos.getY()/*_speedX*/;}
		double DynamicObject::getPosZ(){return _pos.getZ()/*_speedX*/;}
		
		
		double DynamicObject::getSpeedX(){return _speed.getX()/*_speedX*/;}
		void DynamicObject::SetSpeedX(double speed){_speed.set(speed,_speed.getY(),_speed.getZ())/*_speedX=speed*/;}
	
		double DynamicObject::getSpeedY(){return _speed.getY()/*_speedX*/;}
		void DynamicObject::SetSpeedY(double speed){_speed.set(_speed.getX(),speed,_speed.getZ())/*_speedX=speed*/;}
		
		DynamicObject::~DynamicObject(){
		//hide=true;
		}
		
		void DynamicObject::updateX(double delta_t){
			/*SetSpeedX(_speedX+delta_t);
			SetPosX(_x-(delta_t)); */

			SetSpeedX(_speed.getX()+delta_t);

			SetPosX(_pos.getX()+(delta_t));

		}
		
		void DynamicObject::updateY(double delta_t){
			//SetSpeedY(_speedY+delta_t);
			//SetPosY(_y-(delta_t));
			SetSpeedY(_speed.getY()+delta_t);
			SetPosY(_pos.getY()+(delta_t));
		} 
		
		//double DynamicObject::ResetPosition(double x, double y, double z){}
		
		//void draw();

