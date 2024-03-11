
#include "AnimalEstimacao.h"

void Preencher(AnimalEstimacao * &animais){
    
    for (int i = 0; i < 2; i++) {
        animais[i].preencher();
    }
    
}

void VerificaMaisPesado(AnimalEstimacao * &animais) {
    float maiorPeso = 0.0;
    int indiceMaiorPeso = 0;

    for (int i = 0; i < 2; i++) {
        if (animais[i].getPeso() > maiorPeso) {
            maiorPeso = animais[i].getPeso();
            indiceMaiorPeso = i;
        }
    }

    cout << "\nO animal com maior peso: ";
    animais[indiceMaiorPeso].imprimir();
}

int main() {

    AnimalEstimacao * animais = new AnimalEstimacao[2];

    Preencher(animais);
    VerificaMaisPesado(animais);

    delete[] animais;

    return 0;
}
