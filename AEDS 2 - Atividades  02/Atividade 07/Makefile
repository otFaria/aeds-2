Teste.exe: Main.o Musica.o
	g++ -o Teste.exe Main.o Musica.o

Main.o: Main.cpp
	g++ -c Main.cpp

Musica.o.o: Musica.cpp Musica.h
	g++ -c Musica.cpp

clean:
	rm *.o