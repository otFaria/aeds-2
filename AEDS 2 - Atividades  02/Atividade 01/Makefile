Teste.exe: Main.o Livro.o
	g++ -o Teste.exe Main.o Livro.o

Main.o: Main.cpp
	g++ -c Main.cpp

Livro.o: Livro.cpp Livro.h
	g++ -c Livro.cpp

clean:
	rm *.o