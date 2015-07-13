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


# Creating OpenGL applications that use GLUT

### Short guide to creating OpenGL applications in Windows and Mac OSX

#### Contents

* Obtaining GLUT (not in OSX)
* A file structure to ease portability
* Source code portability between OSX and all other
* Synonyms
* Project, Target, Solution …
* Visual Studio
* How to create a new Solution, then a new Project
* Xcode
* How to create a new Project, then a new Target

#### Getting GLUT

* Windows
* Go to Nate Robins page at
[user.xmission.com/~nate/glut.html](user.xmission.com/~nate/glut.html)
* Download [glut-3.7.6-bin.zip](https://rawvideoplayer.googlecode.com/files/glut-3.7.6-bin.zip)
* Unpack the ZIP file
* Create a neat GLUT folder structure (see next slide)
* OSX
* Comes with the OS, no need to do anything
* Be aware: no freeglut please, it is not endorsed by the OpenGL ARB

#### GLUT (for Windows)
* Files in ZIP file
  * glut.def
  * glut.h
  * glut32.dll
  * glut32.lib
  * README-win32.txt

##### Recommended file structure

![alt tag](https://github.com/FMCalisto/Frogger/blob/master/img/glut.png)

#### 1) Visual Studio - Creating a New Solution

##### 1.1)

* Open Visual Studio
* A new solution is automatically created when you create the first Project

#### 2) Visual Studio - Creating a New OpenGL Project

##### 2.1)

* Open Visual Studio
* Select File > New > Project
* Select Visual C++ from Installed Templates
* Select Win32 Console Application
* On the bottom dialogue
* Enter project name
* Move to the root of your work (e.g., myWork)
* Check Create directory for solution (if first project)
* Enter solution name (if first project)
* Press OK

##### 2.2)

* Click Next when Win32 Application Wizard shows
* Unselect Precompiled headers
* Select Empty project
* Click Finish

##### 2.3)

* On Solution Explorer
  * Add implementation files to Source files
    * Right click Source files
    * Select Add
    * Select New Item or Existing Item (if files already exist)
    * Follow instructions
  * Do the same for Header files

##### 2.4)

* On Solution Explorer
  * Right click on project name, select Properties
    * Select C/C++ > Additional Include Directories
    * Browse to the parent of the glut/include directory, select it, press OK
    * Select Linker > Additional Library Directories
    * Browse to the glut/lib directory, select it, press OK
    * Press Apply and OK

Note: use relative paths to directories to ensure you can compile and run on different computers

Congratulations, you are now ready to build your application

#### Visual Studio & Directories
* Very Important Requirement
  * Executables are written to the Debug (or Release) directory under the your solution’s directory (not project’s)
  * glut32.dll must be in that directory or in the system directory
* Running OpenGL Applications
  * From within VS
    * An application runs using its project’s root directory as current directory
  * By double clicking on the executable
    * Application runs in the Debug (or Release) directory of your solution’s root directory


#### How to Compile

If you want you can always Compile on a **Linux Terminal** or using [MinGW](http://www.mingw.org/wiki/HOWTO_Compile_the_OpenGL_Utility_Toolkit_GLUT_for_Win32_with_MinGW) for **Windows**.

1) To compile:

```
make all
```

2) To run:

```
./a.out
```
