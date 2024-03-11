#include "AnimalEstimacao.h"

AnimalEstimacao::AnimalEstimacao() {
    this->especie = "";
    this->raca = "";
    this->idade = 0;
    this->peso = 0.0;
}

AnimalEstimacao::AnimalEstimacao( AnimalEstimacao &outroAnimal) {
    this->especie = outroAnimal.especie;
    this->raca = outroAnimal.raca;
    this->idade = outroAnimal.idade;
    this->peso = outroAnimal.peso;
}

void AnimalEstimacao::setEspecie() {
    cout << "Informe a especie do animal: ";
    cin >> this->especie;
}

void AnimalEstimacao::setRaca() {
    cout << "Informe a raca do animal: ";
    cin >> this->raca;
}

void AnimalEstimacao::setIdade(){

    do{
        cout << "Informe a idade do animal (Em Dias): ";
        cin >> this->idade;
    }while(this->idade <= 0);
}

void AnimalEstimacao::setPeso() {
    
    do{
        cout << "Informe o peso do animal (em KG): ";
        cin >> this->peso;
    }while(this->peso <= 0);
}

string AnimalEstimacao::getEspecie() {
    return this->especie;
}

string AnimalEstimacao::getRaca() {
    return this->raca;
}

int AnimalEstimacao::getIdade() {
    return this->idade;
}

float AnimalEstimacao::getPeso() {
    return this->peso;
}

void AnimalEstimacao::copiar(AnimalEstimacao &outroAnimal) {
    this->especie = outroAnimal.especie;
    this->raca = outroAnimal.raca;
    this->idade = outroAnimal.idade;
    this->peso = outroAnimal.peso;
}

void AnimalEstimacao::preencher() {
    cout << "\n-------------------------------------------------\n";
    cout << "         Preencha os dados do Animal Estimacao         ";
    cout << "\n-------------------------------------------------\n";

    setEspecie();
    setRaca();
    setIdade();
    setPeso();
}

void AnimalEstimacao::imprimir() {
    cout << "\n-------------------------------------------------\n";
    cout << "         Imprimindo dados do Animal Estimacao         ";
    cout << "\n-------------------------------------------------\n\n";

    cout << "Especie: " << this->especie;
    cout << "\nRaca: " << this->raca;

    if(this->idade <= 30)
        cout << "\nIdade: " << this->idade << " Dias";

    else if (this->idade >= 30 && this->idade < 365){
        
        this->idade = this->idade/30.41;
        cout << "\nIdade: " << this->idade << " Meses";
    }

    else if (this->idade >= 365 && this->idade < 730 ){
        this->idade = this->idade/365;
        cout << "\nIdade: " << this->idade << " Ano";
    }

    else if (this->idade >= 720){
        this->idade = this->idade/365;
        cout << "\nIdade: " << this->idade << " Anos";
    }

    cout << "\nPeso: " << this->peso << " kg";
}