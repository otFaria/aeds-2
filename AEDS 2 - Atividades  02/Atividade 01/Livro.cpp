#include "Livro.h"

//Construtor

Livro::Livro(){

    this->autor = " ";
    this->titulo = " ";
    this->editora = " ";
    this->paginas = 0;

}

//Copia

void Livro::copia(Livro &outro){

    this->titulo = outro.getTitulo();
    this->autor = outro.getAutor();
    this->editora = outro.getEditora();
    this->paginas = outro.getNumeroDePaginas();
}

//Preencher

void Livro::preencher(){

    cout << "\n-------------------------------------------------\n";
    cout << "            Preencha os dados do livro            ";
    cout << "\n-------------------------------------------------\n\n";

    cout << "Autor: ";
    cin >> this->autor;
    cout << "Titulo: ";
    cin >> this->titulo;
    cout << "Editora: ";
    cin >> this->editora;

    do{
        cout << "Numero de Paginas: ";
        cin >> this->paginas;
    }while(this->paginas <= 0);
}

//imprimir

void Livro::Imprimir(Livro reserva){

    cout << "\n-----------------------------------------------------\n";
    cout << "             Imprimindo o livro " << reserva.getTitulo();
    cout << "\n-----------------------------------------------------\n\n";

    cout << "Nome do Autor: " << reserva.autor;
    cout << "\nNome da Editora: " << reserva.editora;
    cout << "\nNumero de Paginas: " << reserva.paginas << endl;
}   

//Set


void Livro::setTitulo(){
    cout << "\nMe informe o titulo do livro: ";
    cin >> this->titulo;
}

void Livro::setAutor(){
    cout << "\nMe informe  o autor do livro " << this->getTitulo() << ": ";
    cin >> this->autor;
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

string Livro::getTitulo(){
    return this->titulo;
}

string Livro::getAutor(){
    return this->autor;
}

string Livro::getEditora(){
    return this->editora;
}

int Livro::getNumeroDePaginas(){
    return this->paginas;
}