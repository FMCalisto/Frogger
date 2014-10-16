#include <stdio.h>

#include"GameObject.h"
#include "Vector3.h"

using namespace std;

static int flag = 1;


GameObject::GameObject(){

}

GameObject::~GameObject(){
//hide=true;
}



void GameObject::updateX(double delta_t){
	double xcoord = vel->getX();
	Vector3* upv = new Vector3(xcoord + delta_t,0,0);
	*vel= *vel + *upv;
		//speedX+=delta_t;
	 
}

void GameObject::updateY(double delta_t){
	double ycoord = vel->getY();
	Vector3* upv = new Vector3(0,ycoord + delta_t,0);
	*vel=*vel+ *upv;
		//speedY+=delta_t;
}
