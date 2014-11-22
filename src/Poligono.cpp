#include "Poligono.h"
#include <stdio.h>

Poligono::Poligono(){
		
		}
		
void Poligono::setDim(int larg, int comp){

    _comp = comp;
    _larg = larg;

}

void Poligono::setPos(double posx,double posy, double posz){

    _posx = posx;
    _posy = posy;
    _posz = posz;
    
}	

void Poligono::draw(double optional){
     /*   int _comp = 28;
	    int _larg = 8;*/
	    double lf, cf;

	    glPushMatrix();
	    // materials::skin_green.use();
	    glTranslatef(_posx,_posy,_posz);
	    

	    for( double l = (-_comp/2) ; l < _comp/2; l++)
	        for( double c = (-_larg/2); c < _larg/2; c++){
                glPushMatrix();
               
                glScalef(1.f, 1.f, optional); 
                
                lf = l+0.5; cf = c+0.5;
                
                glTranslatef(lf,cf,0);

	            glBegin(GL_TRIANGLE_FAN);			// Face posterior
		            glNormal3f(0.0, 0.0, 1.0);	// Normal da face
		            glVertex3f(0.0, 0.0, 0.5);
		            glVertex3f(0.5, 0.5, 0.5);
		            glVertex3f(0.0, 0.5, 0.5);
		            glVertex3f(-0.5, 0.5, 0.5);
		            glVertex3f(-0.5, 0.0, 0.5);
		            glVertex3f(-0.5, -0.5, 0.5);
		            glVertex3f(0.0, -0.5, 0.5);
		            glVertex3f(0.5, -0.5, 0.5);
		            glVertex3f(0.5, 0.0, 0.5);
		            glVertex3f(0.5, 0.5, 0.5);
	            glEnd();

	            glBegin(GL_QUADS);			// Face frontal
		            glNormal3f(0.0, 0.0, -1.0); 	// Normal da face
		            glVertex3f(0.5, 0.5, -0.5);
		            glVertex3f(0.5, -0.5, -0.5);
		            glVertex3f(-0.5, -0.5, -0.5);
		            glVertex3f(-0.5, 0.5, -0.5);
	            glEnd();
	            
	            glBegin(GL_QUADS);			// Face lateral esquerda
		            glNormal3f(-1.0, 0.0, 0.0); 	// Normal da face
		            glVertex3f(-0.5, 0.5, 0.5);
		            glVertex3f(-0.5, 0.5, -0.5);
		            glVertex3f(-0.5, -0.5, -0.5);
		            glVertex3f(-0.5, -0.5, 0.5);
	            glEnd();
	            
	            glBegin(GL_QUADS);			// Face lateral direita
		            glNormal3f(1.0, 0.0, 0.0);	// Normal da face
		            glVertex3f(0.5, 0.5, 0.5);
		            glVertex3f(0.5, -0.5, 0.5);
		            glVertex3f(0.5, -0.5, -0.5);
		            glVertex3f(0.5, 0.5, -0.5);
	            glEnd();
	            
	            glBegin(GL_QUADS);			// Face superior
		            glNormal3f(0.0, 1.0, 0.0);  	// Normal da face
		            glVertex3f(-0.5, 0.5, -0.5);
		            glVertex3f(-0.5, 0.5, 0.5);
		            glVertex3f(0.5, 0.5, 0.5);
		            glVertex3f(0.5, 0.5, -0.5);
	            glEnd();
	            
	            glBegin(GL_QUADS);			// Face inferior
		            glNormal3f(0.0, -1.0, 0.0); 	// Normal da face
		            glVertex3f(-0.5, -0.5, -0.5);
		            glVertex3f(0.5, -0.5, -0.5);
		            glVertex3f(0.5, -0.5, 0.5);
		            glVertex3f(-0.5, -0.5, 0.5);
	            glEnd();
                glPopMatrix();
	        
	        }
	
	    glPopMatrix();
}
