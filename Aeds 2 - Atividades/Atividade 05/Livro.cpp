#include <iostream>
#include "string"
#include "Livro.h"
using namespace std;

Livro::Livro(){

    this->autor = " ";
    this->titulo = " ";
    this->editora = " ";
    this->paginas = 0;

}

//Set

void Livro::setAutor(){

    cout << "\nMe informe  o autor do livro " << this->getTitulo() << ": ";
    cin >> this->autor;
}

void Livro::setTitulo(){
    cout << "\nOla bom ve-lo por aqui, voce tera que preencher os campos a seguir.";
    cout << "\nMe informe o titulo do livro: ";
    cin >> this->titulo;
}

void Livro::setEditora(){

    cout << "\nMe informe a editora do livro " << this->getTitulo() << ": ";
    cin >> this->editora;
}

void Livro::setNumeroDePaginas(){

    cout << "\nAgora me informe o numero de paginas do livro " << this->getTitulo() << ": ";
    cin >> this->paginas;
}

//Get

string Livro::getAutor(){
    return this->autor;
}

string Livro::getTitulo(){
    return this->titulo;
}

string Livro::getEditora(){
    return this->editora;
}

int Livro::getNumeroDePaginas(){
    return this->paginas;
}