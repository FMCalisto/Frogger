# Work to be done 

The purpose of the work of the Computer Graphics Lab 
this year is to recreate a 3D version of this classic, using C and ++ 
OpenGL. The idea is to keep the original gameplay altering 
graphical perspective so that the various elements of the game have one 
3D aspect. You can see an example for inspiration in Figure 
following.

The work is divided into four parts which will be evaluated 
individually throughout the semester. In each of these 
ratings are specific objectives and tasks so they can 
explore the various components of the Computer Graphics program. 
The rest of this document refers to the first part of the work. the 
other three parts will be posted throughout the semester.


# Tasks

The tasks for the first part are:

1. Shaping the river and its banks, as well as the road and its 
Verge using a cube for each element. Set a camera 
fixed with a top view of the scene using a projection
orthogonal (similar to the 2D view of the original game).

2. Shaping the sapo, cars and trunks, using objects 
simple three-dimensional geometric (cubes and spheres). The sapo 
should be composed of more than one geometric object in a 
minimum of two objects, while the car should be composed of 
at least three.

3. Control the motion sapo with the keyboard using the key 
'O' to move the sapo left, 'P' to move 
right, 'Q' to move up and 'A' to move down. The 
sapo should start moving when the key is pressed and 
stop when you release the key.


# Suggestions

1. Using object-oriented programming with the class structure 
UML diagrams presented in the attached. Always follow good 
programming practices that allow reuse of code 
in later deliveries and facilitate future scalability. 

2. Draw the objects on paper before writing OpenGL code 
helps a lot to realize that primitive and changes must 
be applied. In Annex B can find an example of a 
sketch on paper to an object (not using this outline). 

3. The wheels of the car can be created using the torus. 

4. Some of the study functions:

```
- GlViewport, glMatrixMode, glOrtho 
- GlTranslate, glRotate, glScale 
- GlPushMatrix, glPopMatrix 
- GlutSolidCube, glutSolidSphere 
- glutKeyboardFunc 
- glutTimerFunc 
- GlutGet (GLUT_ELAPSED_TIME)
```
