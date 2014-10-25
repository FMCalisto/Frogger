#include "OrthogonalCamera.h"
#include <stdio.h>

#include <GL/glut.h>


using namespace std;
		OrthogonalCamera::OrthogonalCamera(double left, double right, double bottom, double top, double near, double far){
		    _left = left;
		    _right = right;
		    _bottom = bottom;
		    _top = top;
		    _near = near;
		    _far = far;
		    int w = glutGet( GLUT_WINDOW_WIDTH );
            int h = glutGet( GLUT_WINDOW_HEIGHT );
		    glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glViewport(0, 0, w, h);
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            glOrtho( -w/40.0, w/40.0, -h/40.0, h/40.0, -10, 10);   
            glMatrixMode(GL_MODELVIEW);
		
		}
		/*OrthogonalCamera::~OrthogonalCamera(){
		
		}*/
		
		void OrthogonalCamera::computeProjectionMatrix(){
		
		}
		
		void OrthogonalCamera::computeVisualizationMatrix(){
		
		}
		
		void OrthogonalCamera::update(GLsizei w, GLsizei h, double atX, double atY, double atZ){
            glViewport(0, 0, w, h);
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            glOrtho( -w/40.0, w/40.0, -h/40.0, h/40.0, -10, 10);   
                    glMatrixMode(GL_MODELVIEW);    
		}
		

 
