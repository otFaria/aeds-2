#include "Musica.h"

void Preencher(Musica * &musicas) {
    for (int i = 0; i < 2; i++) {
        musicas[i].preencher();
    }
}

void VerificaMaisLonga(Musica * &musicas) {
    int maiorDuracao = 0;
    int indiceMaiorDuracao = 0;

    for (int i = 0; i < 2; i++) {
        if (musicas[i].getDuracao() > maiorDuracao) {
            maiorDuracao = musicas[i].getDuracao();
            indiceMaiorDuracao = i;
        }
    }

    cout << "\nA musica mais longa: ";
    musicas[indiceMaiorDuracao].imprimir();
}

int main() {
    Musica * musicas = new Musica[2];
    
    Preencher(musicas);
    VerificaMaisLonga(musicas);

    delete[] musicas;

    return 0;
}