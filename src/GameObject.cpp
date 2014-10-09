#include"GameObject.h"
#include<stdio.h>

using namespace std;




		GameObject::GameObject(){
		
		}

/*		~GameObject::GameObject(){
		
		}*/
		
	
		
		void GameObject::update(double delta_t)
		{
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
				glTranslatef(0, 0, -35);

				//   static float angle = 0;
				//  angle += 1.0f;

				//sapo
				glPushMatrix();
				glTranslatef(0, 10, 0);
				// glRotatef(angle, 0.1, 0.2, 0.5);
				glColor3ub(0, 255, 0);
				glScalef(1.0f, 0.5f, 1.0f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
				glutSolidSphere(5.0f, 20, 20);
				glPopMatrix();
				//sapo ENDS

				//sapo olho
				glPushMatrix();
				glTranslatef(-2, 10, 3);
				// glRotatef(angle, 0.1, 0.2, 0.5);
				glColor3ub(255, 255, 255);
				glScalef(1.0f, 0.5f, 1.0f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
				glutSolidSphere(2.0f, 20, 20);
				glPopMatrix();
				//sapoOlho ENDS

				//sapo olho
				glPushMatrix();
				glTranslatef(2, 10, 3);
				// glRotatef(angle, 0.1, 0.2, 0.5);
				glColor3ub(255, 255, 255);
				glScalef(1.0f, 0.5f, 1.0f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
				glutSolidSphere(2.0f, 20, 20);
				glPopMatrix();
				//sapoOlho ENDS

				//sapo olho
				glPushMatrix();
				glTranslatef(-2.5, 10, 4);
				// glRotatef(angle, 0.1, 0.2, 0.5);
				glColor3ub(0, 0, 0);
				glScalef(1.0f, 0.5f, 1.0f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
				glutSolidSphere(1.0f, 20, 20);
				glPopMatrix();
				//sapoOlho ENDS

				//sapo olho
				glPushMatrix();
				glTranslatef(2.5, 10, 4);
				// glRotatef(angle, 0.1, 0.2, 0.5);
				glColor3ub(0, 0, 0);
				glScalef(1.0f, 0.5f, 1.0f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
				glutSolidSphere(1.0f, 20, 20);
				glPopMatrix();
				//sapoOlho ENDS
				//---------------------------------------------------------------------------------------------------------------------------------------------

				glPushMatrix();
				glTranslatef(2.5, 10, 4);
				// glRotatef(angle, 0.1, 0.2, 0.5);
				glColor3ub(255, 0, 0);
				glScalef(1.0f, 0.5f, 1.0f); // glScalef(a,b,c)  Make the shape (a) times as wide, (b times) height and (c times) as deep
				glutSolidSphere(1.0f, 20, 20);
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
				glutCreateWindow("sapo");

				glutDisplayFunc(display);
				glutReshapeFunc(reshape);
				// glutTimerFunc(0, timer, 0);

				init();

				glutMainLoop();
				return 0;
			}

		}

