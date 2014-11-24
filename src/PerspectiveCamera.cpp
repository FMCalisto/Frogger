#include "PerspectiveCamera.h"
#include <stdio.h>
#include <iostream>

#include <GL/glut.h>


using namespace std;
		PerspectiveCamera::PerspectiveCamera(double atX, double atY, double atZ, double upX, double upY, double upZ, double fovy, double aspect, double zNear, double zFar){
          
            /*o fovy e aspect são usados como eye XD */

            _at.set(atX, atY, atZ);
            _up.set(upX, upY, upZ);
            if( upY == 1 && upZ == 1){
                segue = false;
            }else{
                segue = true;
                }
            int w = glutGet( GLUT_WINDOW_WIDTH );
            int h = glutGet( GLUT_WINDOW_HEIGHT );
            glViewport(0, 0, w, h);
            glMatrixMode( GL_PROJECTION );
            glLoadIdentity();

            gluPerspective( 90, w / h, 0.1, 100 );

            glMatrixMode( GL_MODELVIEW );
            glLoadIdentity();
            
            /*cout << _at.getX() << " "<< _at.getY()-5 << " "<< 2 << endl
                    <<  _at.getX()<< " "<< _at.getY() << " "<< _at.getZ() << endl
                    << _up.getX() << " "<< _up.getY() << " "<< _up.getZ() << endl;
                    
                    puts("-------------");*/
            
           gluLookAt
            ( 
            _at.getX(),_at.getY()-5, aspect, 
            _at.getX(), _at.getY(), _at.getZ(),
            _up.getX(), _up.getY(), _up.getZ()
            );
       
            glFlush();
  
		}
		
		/*PerspectiveCamera::~PerspectiveCamera(){
		
		}*/
		
		/*não apagar caralho*/
		
		/*COMPUTEPROJECTMATRIX 
            ORTHO E PERSPECTIVE    reshape + display ou quando mudo de câmara*/
            
            /*compute visualization matrix   INVOCADO no display
                GLULOOKAT*/
		
		void PerspectiveCamera::computeProjectionMatrix(){
		
		    
		
		}
		
		void PerspectiveCamera::computeVisualizationMatrix(){
		
		    gluLookAt( 
            0,-15, 5, /*eyeX*/
            0, 10, 2, /*SAPOposX, SAPOposY, 2   A.K.A AT*/
            0, 1, 0   /* _up */
            );
            
            /*vista de cima
            gluLookAt
            ( 
            0,0, 20, 
            0, 0, 0,
            0, 1, 1
            );
            */
		
		}
		
		void PerspectiveCamera::update(GLsizei w, GLsizei h, double atX, double atY, double atZ){
		   
            
           _at.set(atX, atY, atZ);
           glViewport(0, 0, w, h);
           
           if(segue){
               gluPerspective( 90, w / h, 0.1, 100 );
                  glLoadIdentity();
                glMatrixMode( GL_MODELVIEW );
                glLoadIdentity();
                 
               /*cout << _at.getX() << " "<< _at.getY()-5 << " "<< 2 << endl
                        <<  _at.getX()<< " "<< _at.getY() << " "<< _at.getZ() << endl
                        << _up.getX() << " "<< _up.getY() << " "<< _up.getZ() << endl;*/
                 
                
                
                gluLookAt
                ( 
                _at.getX(),_at.getY()-5, 5,   /*eye*/
                _at.getX(), _at.getY(), 2,  /*at*/  
                0, 1,1     /*up*/
                );
            }
            
              
		}
		
		
		

  
