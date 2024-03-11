#include "Casa.h"

void Preencher(Casa * &casa) {
    for (int i = 0; i < 2; i++) {
        casa[i].preencher();
    }
}

void VerificaMaiorPreco(Casa * &casa) {

    float maiorPreco = 0.0;
    int casaMaiorPreco;

    for (int i = 0; i < 2; i++) {
        if (casa[i].getPreco() > maiorPreco) {
            maiorPreco = casa[i].getPreco();
            casaMaiorPreco = i;
        }
    }

    casa[casaMaiorPreco].imprimir();
}

int main() {

    Casa * casa = new Casa[2];
    
    Preencher(casa);
    VerificaMaiorPreco(casa);

    delete[] casa;

    return 0;
}
