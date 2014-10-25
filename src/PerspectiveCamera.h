#ifndef PerspectiveCamera_H
#define PerspectiveCamera_H


using namespace std;

#include <GL/glut.h>



#include"Camera.h"



class PerspectiveCamera : public Camera{
    private:
        double _fovy; double _aspect; double _zNear; double _zFar;
        Vector3 _up;
        bool segue;
	public:
		PerspectiveCamera(double atX, double atY, double atZ, double upX, double upY, double upZ, double fovy, double aspect, double zNear, double zFar);
		//~PerspectiveCamera();
		void update(GLsizei w, GLsizei h, double atX, double atY, double atZ);
		void computeProjectionMatrix();
		void computeVisualizationMatrix();
		
};
#endif   
