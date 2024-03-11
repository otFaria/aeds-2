#include <iostream>
#include <string>
using namespace std;

class AnimalEstimacao {

private:
    string especie;
    string raca;
    float idade;
    float peso;

public:

    // Construtores

    AnimalEstimacao();
    AnimalEstimacao(AnimalEstimacao &outroAnimal);

    // Setters

    void setEspecie();
    void setRaca();
    void setIdade();
    void setPeso();

    // Getters
    
    string getEspecie();
    string getRaca();
    int getIdade();
    float getPeso();

    // Métodos

    void copiar(AnimalEstimacao &outroAnimal);
    void preencher();
    void imprimir();
};
