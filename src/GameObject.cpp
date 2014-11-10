#include"GameObject.h"
#include "Vector3.h"
#include<stdio.h>
#include<iostream>
#include"materials.h"

using namespace std;




		GameObject::GameObject(){
		
		}

		GameObject::~GameObject(){
		//hide=true;
		}
		
	
		
		void GameObject::updateX(double delta_t){} /*{
		    cout << "vim ao gameobject comprar batatas" << endl;
		    
			double xcoord = vel->getX();
			Vector3* upv = new Vector3(xcoord+delta_t,0,0);
			*vel= *vel + *upv;
				//speedX+=delta_t;
		}*/

		void GameObject::updateY(double delta_t){}/*{
			double ycoord = vel->getY();
			Vector3* upv = new Vector3(0,ycoord+delta_t,0);
			*vel=*vel+ *upv;
				//speedY+=delta_t;
		}
		*/
		void GameObject::draw(){} 
		double GameObject::getPosX(){}
		double GameObject::getPosY(){}
		double GameObject::getPosZ(){}
		
		double GameObject::getX(){}
		double GameObject::getY(){}
		double GameObject::getZ(){}
		void GameObject::updateXTRONCO(double delta_t){}
		void GameObject::updateXTECLA(double delta_t){}
		double GameObject::getSpeedX(){}
		
		
	    void GameObject::SetPosX(double x){}
		void GameObject::SetPosY(double y){}
		void GameObject::SetPosZ(double z){}
		void GameObject::ResetPosition(double x, double y, double z){}

