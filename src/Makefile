
hello: main.o GameManager.o 
	g++ main.o GameManager.o -o jogo -lglut -lGL -lGLU

main.o: main.cpp
	g++ -c main.cpp -lglut -lGL -lGLU

GameManager.o: GameManager.cpp
	g++ -c GameManager.cpp -lglut -lGL -lGLU

clean:
	rm -rf *o jogo
 
