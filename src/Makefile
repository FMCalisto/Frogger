all: frogger

frogger: Main.o GameManager.o frogger.o
	g++ Main.o GameManager.o frogger.o -o frogger -lGL -lGLU -lglut

Main.o: Main.cpp
	g++ -c Main.cpp -lGL -lGLU -lglut

GameManager.o: GameManager.cpp
	g++ -c GameManager.cpp -lGL -lGLU -lglut

frogger.o: frogger.cpp
	g++ -c frogger.cpp -lGL -lGLU -lglut

clean:
	rm -rf *o frogger -lGL -lGLU -lglut