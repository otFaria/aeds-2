#include <iostream>
#include "Livro.h"
using namespace std;

void Preencher(Livro * &livro){

    for (int i = 0; i < 2; i++){
        livro[i].setTitulo();
        livro[i].setAutor();
        livro[i].setEditora();
        livro[i].setNumeroDePaginas();
    }
}

void VerificaMaiorNumeroDePaginas(Livro * &livro){

    int MaiorNumPag = 0; //Maior Numero De Pagina
    string LivroMaiorNPg = " "; //Nome do livro com o maior numero de pagina
    
    for (int i = 0; i < 2; i++){
        if (livro[i].getNumeroDePaginas() > MaiorNumPag){
            MaiorNumPag = livro[i].getNumeroDePaginas(); 
            LivroMaiorNPg = livro[i].getTitulo();
        }
    }
    
    cout << "O livro com o maior numero de pagina e: " << MaiorNumPag;
}

int main (){

    Livro * livro = new Livro [2];

    Preencher(livro);
    VerificaMaiorNumeroDePaginas(livro);

    return 0;
}