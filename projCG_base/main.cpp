/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#include <GL/glut.h>

#include <vector>

#include"GameManager.h"


GameManager * gm;
int _altura;
int _largura;


void myDisplay(void){	
	
	gm->display();

}

void myReshape(GLsizei w, GLsizei h){
	
	gm->reshape(w,h);

}


/*void myonTimer(int extra){
	
	gm->onTimer();

}*/

void timer(int extra){
    glutPostRedisplay();
    glutTimerFunc(16, timer, 0);
}

int main(int argc, char **argv){

	gm = new GameManager(1024,720);
	
	
	glutInit(&argc, argv);
    glutInitWindowSize(1024,720);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    glutCreateWindow("Frogger");
    
    gm->init();

    glutDisplayFunc(myDisplay);
    glutReshapeFunc(myReshape);
    glutTimerFunc(0, timer, 0);
    
    
    
    glutMainLoop();
	

	return 0;
}
