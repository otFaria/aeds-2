Teste.exe: Main.o TV.o
	g++ -o Teste.exe Main.o TV.o

Main.o: Main.cpp
	g++ -c Main.cpp

TV.o: TV.cpp TV.h
	g++ -c TV.cpp

clean:
	rm *.o