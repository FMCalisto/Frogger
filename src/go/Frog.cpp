#include <GL/glut.h>
#include <cmath>
#define PI acos(-1.0)
static double x, y;

/* ================================================================= */
/* =========================== Francisco =========================== */
/* ================================================================= */

/*

#include "Frog.h"

Frog::Frog()
{

}

Frog::Frog(double x, double y, double z):DynamicObject(x,y,z)
{

}
Frog::~Frog()
{

}

*/

/*void DynamicObject::update(double delta_t){
//setPosition(getPosition() + getSpeed()*delta_t);
}*/


/* ================================================================= */

/* ================================================================= */



void processSpecialKeys(int key, int xx, int yy) {

        //float fraction = 0.1f;

        switch (key) {
                case GLUT_KEY_LEFT:
                        x-=0.1;
                        break;
                case  GLUT_KEY_RIGHT:
                        x+=0.1;
                        break;
                case GLUT_KEY_UP :
                        y += 0.1;
                        break;
                case GLUT_KEY_DOWN :
                        y -= 0.1;

                        break;
        default:
        break;
        }

        glutPostRedisplay();
}

void timer(int extra){
    glutPostRedisplay();
    glutTimerFunc(250, timer, 0);
}


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

    // move back a bit
    glTranslatef( 0, 0, -35 );

 //   static float angle = 0;
  //  angle += 1.0f;
glPushMatrix();
	glTranslatef(x,y,0);
	//Frog
	glPushMatrix();
        glTranslatef(0,10,0);
       // glRotatef(angle, 0.1, 0.2, 0.5);
        glColor3ub(0,255,0);
        glScalef(1.0f, 0.5f, 1.0f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
        glutSolidSphere(5.0f, 20,20);
    	glPopMatrix();
	//Frog ENDS

//Frog olho
	glPushMatrix();
        glTranslatef(-2,10,3);
       // glRotatef(angle, 0.1, 0.2, 0.5);
        glColor3ub(255,255,255);
        glScalef(1.0f, 0.5f, 1.0f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
        glutSolidSphere(2.0f, 20,20);
    	glPopMatrix();
	//FrogOlho ENDS

//Frog olho
	glPushMatrix();
        glTranslatef(2,10,3);
       // glRotatef(angle, 0.1, 0.2, 0.5);
        glColor3ub(255,255,255);
        glScalef(1.0f, 0.5f, 1.0f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
        glutSolidSphere(2.0f, 20,20);
    	glPopMatrix();
	//Frog Olho ENDS

//Frog olho
	glPushMatrix();
        glTranslatef(-2.5,10,4);
       // glRotatef(angle, 0.1, 0.2, 0.5);
        glColor3ub(0,0,0);
        glScalef(1.0f, 0.5f, 1.0f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
        glutSolidSphere(1.0f, 20,20);
    	glPopMatrix();
	//FrogOlho ENDS

//Frog olho
	glPushMatrix();
        glTranslatef(2.5,10,4);
       // glRotatef(angle, 0.1, 0.2, 0.5);
        glColor3ub(0,0,0);
        glScalef(1.0f, 0.5f, 1.0f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
        glutSolidSphere(1.0f, 20,20);
    	glPopMatrix();
	//FrogOlho ENDS
	//---------------------------------------------------------------------------------------------------------------------------------------------

	glPushMatrix();
        glTranslatef(2.5,10,4);
       // glRotatef(angle, 0.1, 0.2, 0.5);
        glColor3ub(255,0,0);
        glScalef(1.0f, 0.5f, 1.0f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
        glutSolidSphere(1.0f, 20,20);
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
    glutInitWindowSize(1024,720);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    glutCreateWindow("Frog");

    glutDisplayFunc(display);
    glutSpecialFunc(processSpecialKeys);
    glutReshapeFunc(reshape);
    glutTimerFunc(100, timer, 0);

    init();

    glutMainLoop();
    return 0;
}

