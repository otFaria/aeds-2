#include "Bicicleta.h"
void Preencher(Bicicleta * &bicicleta){
    
    for (int i = 0; i < 2; i++) {
        bicicleta[i].preencher();
    }
}

void VerificaMaisCara(Bicicleta * &bicicletas) {
    float maiorPreco = 0.0;
    int indiceMaiorPreco = 0;

    for (int i = 0; i < 2; i++) {
        if (bicicletas[i].getPreco() > maiorPreco) {
            maiorPreco = bicicletas[i].getPreco();
            indiceMaiorPreco = i;
        }
    }

    cout << "\nA bicicleta mais cara: ";
    bicicletas[indiceMaiorPreco].imprimir();
}

int main() {
    Bicicleta * bicicletas = new Bicicleta[2];
    Preencher(bicicletas);
    VerificaMaisCara(bicicletas);

    delete[] bicicletas;


    return 0;
}
