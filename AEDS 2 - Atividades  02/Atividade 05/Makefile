Teste.exe: Main.o Bicicleta.o
	g++ -o Teste.exe Main.o Bicicleta.o

Main.o: Main.cpp
	g++ -c Main.cpp

Bicicleta.o.o: Bicicleta.cpp Bicicleta.h
	g++ -c Bicicleta.cpp

clean:
	rm *.o