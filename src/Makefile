
hello: Main.o GameManager.o 
	g++ Main.o GameManager.o -o jogo -lglut -lGL -lGLU

Main.o: Main.cpp
	g++ -c Main.cpp -lglut -lGL -lGLU

GameManager.o: GameManager.cpp
	g++ -c GameManager.cpp -lglut -lGL -lGLU

clean:
	rm -rf *o jogo
 
