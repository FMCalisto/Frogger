/*#include <windows.h>
#include <gl\GL.h>
#include <glut.h>*/

#include <GL/glut.h>

#include <vector>
#include <iostream>

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

void myspecialKeys( int key, int x, int y ){
    gm->specialKeys(key,x,y);
}

void mynormalKeys( unsigned char key, int x, int y ){
    gm->normalKeys(key,x,y);
}


/*void myonTimer(int extra){
	
	gm->onTimer();

}*/

void timer(int extra){
	/*int tempoAtual = glutGet(GLUT_ELAPSED_TIME); int tempo = tempoAtual - lastUpdate; lastUpdate = tempoAtual;*/
    extra = glutGet(GLUT_ELAPSED_TIME);
    //cout << extra << endl;
    gm->update(extra);
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
    glutSpecialFunc(myspecialKeys );
    glutKeyboardFunc(mynormalKeys );
    glutTimerFunc(100, timer, 0);
    
    
    
    glutMainLoop();
	

	return 0;
}

