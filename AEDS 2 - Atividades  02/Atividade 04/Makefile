Teste.exe: Main.o AnimalEstimacao.o
	g++ -o Teste.exe Main.o AnimalEstimacao.o

Main.o: Main.cpp
	g++ -c Main.cpp

TV.o: AnimalEstimacao.cpp AnimalEstimacao.h
	g++ -c AnimalEstimacao.cpp

clean:
	rm *.o