#include"GameObject.h"
#include "Vector3.h"
#include<stdio.h>
#include <GL/glut.h>

using namespace std;




		GameObject::GameObject(){
		
		}

		GameObject::~GameObject(){
		//hide=true;
		}
		
	
	/*	int tempoAtual = glutGet(GLUT_ELAPSED_TIME);
int tempo = tempoAtual - lastUpdate;

lastUpdate = tempoAtual; */
		
		/*	int tempoAtual = glutGet(GLUT_ELAPSED_TIME);
int tempo = tempoAtual - lastUpdate;

lastUpdate = tempoAtual; */
		
		void GameObject::updateX(double delta_t){
<<<<<<< HEAD
			double xcoord = vel->getX();
=======
			int tempoAtual = glutGet(GLUT_ELAPSED_TIME);
			double tempo = tempoAtual - lastUpdate;
			lastUpdate = tempoAtual;
			delta_t=tempo/2.0;
			double xcoord = vel->getX();
			
>>>>>>> origin/master
			Vector3* upv = new Vector3(xcoord+delta_t,0,0);
			*vel= *vel + *upv;
				//speedX+=delta_t;
		}

		void GameObject::updateY(double delta_t){
<<<<<<< HEAD
=======
			int tempoAtual = glutGet(GLUT_ELAPSED_TIME);
			double tempo = tempoAtual - lastUpdate;
			lastUpdate = tempoAtual;
			delta_t=tempo/2.0;
>>>>>>> origin/master
			double ycoord = vel->getY();
			Vector3* upv = new Vector3(0,ycoord+delta_t,0);
			*vel=*vel+ *upv;
				//speedY+=delta_t;
		} 
<<<<<<< HEAD
=======

>>>>>>> origin/master

