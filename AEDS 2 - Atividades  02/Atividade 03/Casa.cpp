#include "Casa.h"
using namespace std;

Casa::Casa() {
    
    endereco = " ";
    area = 0.0;
    numQuartos = 0;
    preco = 0.0;

}

Casa::Casa( Casa &outraCasa) {

    endereco = outraCasa.endereco;
    area = outraCasa.area;
    numQuartos = outraCasa.numQuartos;
    preco = outraCasa.preco;

}

void Casa::setEndereco() {

    cout << "Informe o endereco da casa: ";
    cin >> this->endereco;

}

void Casa::setArea() {

    do{
        cout << "Informe a area da casa em m2 (Apenas Numeros): ";
        cin >> this->area;
    }while(this->area <= 0);

}

void Casa::setNumQuartos() {

    cout << "Informe o numero de quartos da casa: ";
    cin >> this->numQuartos;

}

void Casa::setPreco() {

    do{
        cout << "Informe o preco da casa: ";
        cin >> this->preco;
    }while(preco < 0);

}

string Casa::getEndereco() {
    return this->endereco;
}

float Casa::getArea() {
    return this->area;
}

int Casa::getNumQuartos() {
    return this->numQuartos;
}

float Casa::getPreco() {
    return this->preco;
}

void Casa::copiar( Casa &outraCasa) {

    this->endereco = outraCasa.endereco;
    this->area = outraCasa.area;
    this->numQuartos = outraCasa.numQuartos;
    this->preco = outraCasa.preco;

}

void Casa::preencher() {

    cout << "\n-------------------------------------------------\n";
    cout << "            Preencha os dados da Casa            ";
    cout << "\n-------------------------------------------------\n";


    this->setEndereco();
    this->setArea();
    this->setNumQuartos();
    this->setPreco();

}

void Casa::imprimir() {

    cout << "\n-------------------------------------------------\n";
    cout << "         Imprimindo a casa com o maior preco         ";
    cout << "\n-------------------------------------------------\n\n";


    cout << "\nEndereco: " << this->endereco;
    cout << "\nArea: " << this->area << " m2";
    cout << "\nQuartos: " << this->numQuartos;
    cout << "\nPreco: " << this->preco;

}