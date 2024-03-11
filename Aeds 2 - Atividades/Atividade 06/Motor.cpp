#include <iostream>
#include <string>
#include "Motor.h"
using namespace std;

//Construtor 

Motor::Motor(){

    this->tipo = " ";
    this->potencia = 0;
    this->consumo = 0.0;
}

//Set

void Motor::setTipo(){

    cout << "Me informe o tipo do seu veiculo, (Ex: Gasolina,Eletrico,Disel): ";
    cin >> this->tipo;
}

void Motor::setPotencia(){

    cout << "Agora me informe a potencia do seu veiculos, (Obs: Quantos cavalos de potencia): ";
    cin >> this->potencia;
}

void Motor::setConsumo(){

    cout << "Por ultimo me informe o consumo do seu veiculo: ";
    cin >> this->consumo;
    cout << endl;
}

//Get

string Motor::getTipo(){
    return this->tipo;
}

int Motor::getPotencia(){
    return this->potencia;
}

float Motor::getConsumo(){
    return this->consumo;
}