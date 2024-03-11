#include "Filme.h"
void Preencher(Filme * &filmes) {
    for (int i = 0; i < 2; i++) {
        filmes[i].preencher();
    }
}

void VerificaMaisLongo(Filme * &filmes) {
    int maiorDuracao = 0;
    int indiceMaiorDuracao = 0;

    for (int i = 0; i < 2; i++) {
        if (filmes[i].getDuracao() > maiorDuracao) {
            maiorDuracao = filmes[i].getDuracao();
            indiceMaiorDuracao = i;
        }
    }

    cout << "\nO filme mais longo: ";
    filmes[indiceMaiorDuracao].imprimir();
}

int main() {
    Filme * filmes = new Filme[2];
    
    Preencher(filmes);
    VerificaMaisLongo(filmes);

    delete[] filmes;

    return 0;
}