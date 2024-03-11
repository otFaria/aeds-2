Teste.exe: Main.o Filme.o
	g++ -o Teste.exe Main.o Filme.o

Main.o: Main.cpp
	g++ -c Main.cpp

Filme.o.o: Filme.cpp Filme.h
	g++ -c Filme.cpp

clean:
	rm *.o