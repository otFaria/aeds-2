#include "TV.h"

void Preencher(TV * &TV){

    for (int i = 0; i < 2; i++){
        TV[i].preencher();
    }
}

void VerificaMaiorNumeroDePaginas(TV * &TV){

    int MaiorPreco = 0; //Maior Preco
    string TVMaiorPreco = " "; //Nome do TV com o maior Preco
    int PegaTV = 0;

    for (int i = 0; i < 2; i++){
        if (TV[i].getPreco() > MaiorPreco){
            MaiorPreco = TV[i].getPreco(); 
            TVMaiorPreco = TV[i].getMarca();
            PegaTV = i;
        }
    }
    
    cout << "\nTV que contem o maior preco.";
    TV[PegaTV].Imprimir();
}

int main (){

    TV * tv = new TV [2];

    Preencher(tv);
    VerificaMaiorNumeroDePaginas(tv);
    
    delete[] tv;

    return 0;
}