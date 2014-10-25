#ifndef Camera_H
#define Camera_H



//using namespace std;
#include <GL/glut.h>
#include "Vector3.h"

class Camera {
	//protected:
	//double speedX,speedY;
	//Vector3* vel;
	protected:
	    Vector3 _at;
	    Vector3 _up;
	public:		
		Camera();
		~Camera();

	    virtual void update(GLsizei w, GLsizei h, double atX, double atY, double atZ);
	    virtual void computeProjectionMatrix();
		virtual void computeVisualizationMatrix();
};
#endif  
