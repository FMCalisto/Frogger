#ifndef OrthogonalCamera_H
#define OrthogonalCamera_H


using namespace std;

#include <GL/glut.h>



#include"Camera.h"



class OrthogonalCamera : public Camera{
    private:
        double _left, _right, _bottom, _top, _near, _far;
	public:
		OrthogonalCamera(double left, double right, double _bottom, double _top, double _near, double _far);
		//~OrthogonalCamera();
		void update(GLsizei w, GLsizei h, double atX, double atY, double atZ);
		void computeProjectionMatrix();
		void computeVisualizationMatrix();
};
#endif  
