#include <iostream>
#include "Carro.h"
#include <string>
using namespace std;

//Construtor

Carro::Carro(){

    nomeCarro = " ";
    marca = " ";
    cor= " ";
    motorizacao = 0.0;
    valor = 0.0;
}

//Construtor de copia

Carro::Carro(Carro &outro){

    this->nomeCarro = outro.getNomeCarro();
    this->marca = outro.getMarca();
    this->cor = outro.getCor();
    this->motorizacao = outro.getMotorizacao();
    this->valor = outro.getValor();
}

//Aqui estão os set ultilizados.

void Carro::setNomeCliente(){

    cout << "Ola Usuario, Bom ver-lo por aqui, me informe o seu (Primeiro) nome para ir para proxima estapa." << endl;

    cout << "Seu nome: ";
    cin >> this->nomeCliente;
    
}

void Carro::setNomeCarro(){

    cout << "\n\nOla " << this->nomeCliente << " agora preencha as seguintes informacoes que serao pedidas." << endl;
    cout << "Nome do carro: " << endl;
    cin >> this->nomeCarro;
}

void Carro::setMarca(){

    cout << "\nMarca do carro: " << endl;
    cin >> this->marca;
}

void Carro::setCor(){
    
    cout << "\nCor do carro: " << endl;
    cin >> this->cor;

}

void Carro::setMotorizacao(){

    cout << "\nMotorizacao do carro: " << endl;
    cin >> this->motorizacao;

}

void Carro::setValor(){
    cout << "\nValor do carro: " << endl;
    cin >> this->valor;
}

//Aqui estão os get ultilizados.

string Carro::getNomeCliente(){
    return this->nomeCliente;
}

string Carro::getNomeCarro(){
    return this->nomeCarro;
}

string Carro::getMarca(){
    return this->marca;
}

string Carro::getCor(){
    return this->cor;
}

float Carro::getMotorizacao(){

    return this->motorizacao;
}

float Carro::getValor(){

    return this->valor;
}

//aqui está o metodo de imprimir.

void Carro::imprimir(){

    cout << "Carro " << this->nomeCarro << " as suas especificacoes e caracteristicas sao: \n";

    cout << this->nomeCarro;
    cout << endl;
    cout << this->marca;
    cout << endl;
    cout << this->cor;
    cout << endl;
    cout << this->motorizacao;
    cout << endl;
    cout << this->valor;
    cout << endl;
}