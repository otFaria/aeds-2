#include <iostream>
#include <string>
using namespace std;

class Bicicleta {

private:

    string marca;
    string modelo;
    float tamanhoQuadro;
    float preco;

public:

    // Construtores

    Bicicleta();
    Bicicleta(Bicicleta &outraBicicleta);

    // Setters

    void setMarca();
    void setModelo();
    void setTamanhoQuadro();
    void setPreco();

    // Getters
    
    string getMarca();
    string getModelo();
    float getTamanhoQuadro();
    float getPreco();

    // Métodos

    void copiar(Bicicleta &outraBicicleta);
    void preencher();
    void imprimir();

};