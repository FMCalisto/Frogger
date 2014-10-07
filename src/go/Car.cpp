/* ================================================================= */
/* =========================== Francisco =========================== */
/* ================================================================= */


#include <GL/glut.h>
#include <cmath>
#define PI acos(-1.0)



void init()
{
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glOrtho(0.0, 100.0, 0.0, 100.0, 1.0, -1.0);
	glLoadIdentity();
	GLint viewport[4];
	glGetIntegerv(GL_VIEWPORT, viewport);
	double aspect = (double)viewport[2] / (double)viewport[3];
	gluPerspective(60, aspect, 1, 100);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glScaled(10.8, 10.8, .6);

	//	move back a bit
	glTranslatef( 0, 0, -35 );

	//	static float angle = 0;
	//	angle += 1.0f;

	//Car
	glPushMatrix();

	//glTranslatef(4, 3.5, 0);

	glColor3f(0.25, 0.25, 0.25);

	//carbody

	glPushMatrix();

	glScalef(.8, .8, .6);
	glutSolidCube(1);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-.4, 0, -.15);

	//hood + front wheels

	glPushMatrix();

	glTranslatef(-.25, 0, 0);
	glScalef(.5, .6, .3);
	glutSolidCube(1);

	glPopMatrix();
	glColor3f(0.25f, 0.25f, 0.25f);

	glPushMatrix();
	glTranslatef(-.25, .4, 0);
	glRotatef(-45.0, 0.0, 1.0, 0.0);
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	glutSolidTorus(.1, .13, 10, 20);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-.25, -.4, 0);
	glRotatef(-45.0, 0.0, 1.0, 0.0);
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	glutSolidTorus(0.1, .13, 10, 20);

	glPopMatrix();

	glPopMatrix();

	glColor3f(0.25, 0.25, 0.25);
	glPushMatrix();
	glTranslatef(.4, 0, -.15);

	//back + back wheels

	glPushMatrix();

	glTranslatef(.25, 0, 0);
	glScalef(.5, .6, .3);
	glutSolidCube(1);

	glPopMatrix();

	glColor3f(0.25f, 0.25f, 0.25f);

	glPushMatrix();

	glTranslatef(.25, .4, 0);
	glRotatef(-45.0, 0.0, 1.0, 0.0);
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	glutSolidTorus(.1, .13, 10, 20);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(.25, -.4, 0);
	glRotatef(-45.0, 0.0, 1.0, 0.0);
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	glutSolidTorus(.1, .13, 10, 20);

	glPopMatrix();

	glPopMatrix();

	glPopMatrix();

	glutSwapBuffers();
}

void reshape(int w, int h)
{
	glViewport(0, 0, w, h);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(1024, 720);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
	glutCreateWindow("Car");

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	// glutTimerFunc(0, timer, 0);

	init();

	glutMainLoop();
	return 0;
}

/* ================================================================= */

/* ================================================================= */
