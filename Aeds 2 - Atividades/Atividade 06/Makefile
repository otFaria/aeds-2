Teste.exe: Main.o Motor.o
	g++ -o Teste.exe Main.o Motor.o

Main.o: Main.cpp
	g++ -c Main.cpp

Livro.o: Motor.cpp Motor.h
	g++ -c Motor.cpp

clean:
	rm *.o