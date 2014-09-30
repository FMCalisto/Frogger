#include <iostream>

#include "gm/GameManager.h"



#if defined(__APPLE__) || defined(MACOSX)
	#include <OpenGL/gl.h>
	#include <OpenGL/glu.h>
#else
	#include <GL/glut.h>
#endif

using namespace std;

#define screenW 512
#define screenH 512

void init();
void display();
void reshape(int w, int h);
void idleFunc();
void animate();
void controls(unsigned char key, int x, int y);
void specialKeyboardHandler(int key, int x, int y);

int Main(int argc, char **argv)
{
	/*
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH );
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(screenW, screenH);
	glutCreateWindow("Seth Frogger v 0.2");
	
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutIdleFunc(animate);
	glutKeyboardFunc(controls);
	glutSpecialFunc(specialKeyboardHandler);
	//glutMouseFunc();


	glutMainLoop();
	*/
	

	/* ==================== Bruno Oliveira ==================== */

	/*
	 *
	 *
	 */

	glutInit(&argc, argv);
	gm = new GameManager();
	
    glutDisplayFunc((void) gm->display);
    glutReshapeFunc( gm->reshape);
    //glutTimerFunc(0, gm.onTimer, 0);
    
    gm->init();
    
    glutMainLoop();
	
	//gm::display();
	return 0;
}