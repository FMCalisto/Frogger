#include <iostream>

#include "../glut/include/GL/glut.h"
#include "gm\GameManager.h"

using namespace std;

#define screenW 512
#define screenH 512m

void init();
void display();
void reshape(int w, int h);
void idleFunc();
void animate();
void controls(unsigned char key, int x, int y);
void specialKeyboardHandler(int key, int x, int y);

int Main (int argc, char **argv)
{
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
	return 0;
}