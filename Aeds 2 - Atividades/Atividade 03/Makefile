Teste.exe: Main.o Carro.o
	g++ -o Teste.exe Main.o Carro.o

Main.o: Main.cpp
	g++ -c Main.cpp

Carro.o: Carro.h Carro.cpp
	g++ -c Carro.cpp

clear:
	rm *.o