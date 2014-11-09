#include "Poligono.h"
#include <stdio.h>

Poligono::Poligono(){
		
		}
		
void Poligono::setDim(int larg, int comp){

    _comp = comp;
    _larg = larg;

}

void Poligono::setPos(int posy){

    _posy = posy;

}	

void Poligono::draw(){
     /*   int _comp = 28;
	    int _larg = 8;*/
 /* ESTA MERDA*/
	    glPushMatrix();
	    // materials::skin_green.use(); /* ESTA MERDA*/
	    glTranslatef(0,_posy,0);
	    for( int l = (-_comp/2)+1 ; l < _comp/2+1; l++)
	        for( int c = (-_larg/2)+1 ; c < _larg/2; c++){
                glPushMatrix();
               
                
                
                glTranslatef(l,c,-0.5);
              /* 	glBegin(GL_QUADS);			// Face posterior
		            glNormal3f(0.0, 0.0, 1.0);	// Normal da face
		            glVertex3f(1.0, 1.0, 1.0);
		            glVertex3f(-1.0, 1.0, 1.0);
		            glVertex3f(-1.0, -1.0, 1.0);
		            glVertex3f(1.0, -1.0, 1.0);
	            glEnd();*/
	            glBegin(GL_TRIANGLE_STRIP);			// Face posterior
		            glNormal3f(0.0, 0.0, 1.0);	// Normal da face
		            glVertex3f(1.0, 1.0, 1.0);
		            glVertex3f(-1.0, 1.0, 1.0);
		            glVertex3f(0.0, 0.0, 1.0);
		            glVertex3f(-1.0, -1.0, 1.0);
		            glVertex3f(1.0, -1.0, 1.0);
	            glEnd();

	            glBegin(GL_QUADS);			// Face frontal
		            glNormal3f(0.0, 0.0, -1.0); 	// Normal da face
		            glVertex3f(1.0, 1.0, -1.0);
		            glVertex3f(1.0, -1.0, -1.0);
		            glVertex3f(-1.0, -1.0, -1.0);
		            glVertex3f(-1.0, 1.0, -1.0);
	            glEnd();
	            
	            glBegin(GL_QUADS);			// Face lateral esquerda
		            glNormal3f(-1.0, 0.0, 0.0); 	// Normal da face
		            glVertex3f(-1.0, 1.0, 1.0);
		            glVertex3f(-1.0, 1.0, -1.0);
		            glVertex3f(-1.0, -1.0, -1.0);
		            glVertex3f(-1.0, -1.0, 1.0);
	            glEnd();
	            
	            glBegin(GL_QUADS);			// Face lateral direita
		            glNormal3f(1.0, 0.0, 0.0);	// Normal da face
		            glVertex3f(1.0, 1.0, 1.0);
		            glVertex3f(1.0, -1.0, 1.0);
		            glVertex3f(1.0, -1.0, -1.0);
		            glVertex3f(1.0, 1.0, -1.0);
	            glEnd();
	            
	            glBegin(GL_QUADS);			// Face superior
		            glNormal3f(0.0, 1.0, 0.0);  	// Normal da face
		            glVertex3f(-1.0, 1.0, -1.0);
		            glVertex3f(-1.0, 1.0, 1.0);
		            glVertex3f(1.0, 1.0, 1.0);
		            glVertex3f(1.0, 1.0, -1.0);
	            glEnd();
	            
	            glBegin(GL_QUADS);			// Face inferior
		            glNormal3f(0.0, -1.0, 0.0); 	// Normal da face
		            glVertex3f(-1.0, -1.0, -1.0);
		            glVertex3f(1.0, -1.0, -1.0);
		            glVertex3f(1.0, -1.0, 1.0);
		            glVertex3f(-1.0, -1.0, 1.0);
	            glEnd();
                glPopMatrix();
	        
	        }
	
	    glPopMatrix();
}
