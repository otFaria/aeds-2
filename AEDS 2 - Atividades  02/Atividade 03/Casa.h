#include <iostream>
#include <string>
using namespace std;

class Casa {

private:
    string endereco;
    float area;
    int numQuartos;
    float preco;

public:

    // Construtores

    Casa();
    Casa(Casa &outraCasa);

    // Setters

    void setEndereco();
    void setArea();
    void setNumQuartos( );
    void setPreco();

    // Getters
    
    string getEndereco();
    float getArea();
    int getNumQuartos();
    float getPreco();

    // Métodos

    void copiar(Casa &outraCasa);
    void preencher();
    void imprimir();
};
