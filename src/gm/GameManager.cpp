#include <vector>
#include <stdio.h>
#include "GameManager.h"

#if defined(__APPLE__) || defined(MACOSX)
  #include <OpenGL/gl.h>
  #include <OpenGL/glu.h>
#else
  #include <GL/glut.h>
#endif

using namespace std;
 
    GameManager::GameManager(){
    glutInitWindowSize(1024,720);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    glutCreateWindow("Frogger");
    puts("LEL");
    }
    
    void GameManager::init()
{
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);
}
    
    void GameManager::display()
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

  //TOP MARGIN
  glPushMatrix();
        glTranslatef(0,10,0);
       // glRotatef(angle, 0.1, 0.2, 0.5);
        glColor3ub(139,69,19);
        glScalef(5.0f, 0.5f, 2.f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
        glutSolidCube(5);
    glPopMatrix();
  //TOP MARGIN ENDS
  //---------------------------------------------------------------------------------------------------------------------------------------------

  //RIVER BEGINS -------------------------------------------------------------------------------------------------------
    glPushMatrix();
        glTranslatef(0,5,0);
       // glRotatef(angle, 0.1, 0.2, 0.5);
        glColor3ub(2,25,255);
        glScalef(5.0f, 1.5f, 2.f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
        glutSolidCube(5);
    glPopMatrix();
    //RIVER ENDS -----------------------------------------------------------------------------------------------------------------
    
    glPushMatrix();
        glTranslatef(0,0,0);
       // glRotatef(angle, 0.1, 0.2, 0.5);
        glColor3ub(139,69,19);
        glScalef(5.0f, 0.5f, 2.f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
        glutSolidCube(5);
    glPopMatrix();

//estrada

    glPushMatrix();
        glTranslatef(0,-5,0);
       // glRotatef(angle, 0.1, 0.2, 0.5);
        glColor3ub(84,84,84);
        glScalef(5.0f, 2.f, 2.f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
        glutSolidCube(5);
    glPopMatrix();

    glutSwapBuffers();
}

void GameManager::reshape(int w, int h)
{
    glViewport(0, 0, w, h);
}

      
    
      
 
