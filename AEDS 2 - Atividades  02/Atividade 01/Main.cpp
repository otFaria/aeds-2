#include <iostream>
#include "Livro.h"
using namespace std;

void Preencher(Livro * &livro){

    for (int i = 0; i < 2; i++){
        livro[i].preencher();
    }
}

void VerificaMaiorNumeroDePaginas(Livro * &livro){

    int MaiorNumPag = 0; //Maior Numero De Pagina
    string LivroMaiorNPg = " "; //Nome do livro com o maior numero de pagina
    string NomeLivro = " ";
    int PegaLivro = 0;

    for (int i = 0; i < 2; i++){
        if (livro[i].getNumeroDePaginas() > MaiorNumPag){
            MaiorNumPag = livro[i].getNumeroDePaginas(); 
            LivroMaiorNPg = livro[i].getTitulo();
            NomeLivro = livro[i].getTitulo();
            PegaLivro = i;
        }
    }
    
    cout << "\nLivro que contem o maior numero de paginas.";
    livro[PegaLivro].Imprimir(livro[PegaLivro]);
}

int main (){

    Livro * livro = new Livro [2];

    Preencher(livro);
    VerificaMaiorNumeroDePaginas(livro);
    
    delete[] livro;
    
    return 0;
}