#include"GameObject.h"

#include<stdio.h>

using namespace std;




		GameObject::GameObject(){
		
		}

		GameObject::~GameObject(){
		}
		
	
		
		void GameObject::updateX(double delta_t){
				speedX+=delta_t;
		}

		void GameObject::updateY(double delta_t){
				speedY+=delta_t;
		}

