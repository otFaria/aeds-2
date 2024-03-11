Teste.exe: Main.o Casa.o
	g++ -o Teste.exe Main.o Casa.o

Main.o: Main.cpp
	g++ -c Main.cpp

TV.o: Casa.cpp Casa.h
	g++ -c Casa.cpp

clean:
	rm *.o