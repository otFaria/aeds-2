#include "Bicicleta.h"

Bicicleta::Bicicleta() {
    marca = " ";
    modelo = " ";
    tamanhoQuadro = 0.0;
    preco = 0.0;
}

Bicicleta::Bicicleta(Bicicleta &outraBicicleta) {
    marca = outraBicicleta.marca;
    modelo = outraBicicleta.modelo;
    tamanhoQuadro = outraBicicleta.tamanhoQuadro;
    preco = outraBicicleta.preco;
}

void Bicicleta::setMarca() {
    cout << "Informe a marca da bicicleta: ";
    cin.ignore();
    getline(cin, this->marca);
}

void Bicicleta::setModelo() {
    cout << "Informe o modelo da bicicleta: ";
    getline(cin, this->modelo);
}

void Bicicleta::setTamanhoQuadro() {
    do {
        cout << "Informe o tamanho do quadro da bicicleta (1 a 3000) (Apenas Numeros): ";
        cin >> this->tamanhoQuadro;

        if (this->tamanhoQuadro <= 0)
            cout << "\nVoce me informou um numero abaixo ou igual a 0, informe novamente.\n";
        else if (this->tamanhoQuadro >= 3000)
            cout << "\nVoce me informou um numero maior que 3000\n";

    } while (this->tamanhoQuadro <= 0 || tamanhoQuadro >= 3000);

    cin.ignore();
}

void Bicicleta::setPreco() {
    do {
        cout << "Informe o preco da bicicleta: ";
        cin >> this->preco;

        if (this->preco < 0 || this->preco > 999999999)
            cout << "\nError 404: Preco digitado invalido,insira novamente.\n";

    } while (this->preco < 0 || this->preco > 999999999);

    cin.ignore();
}

string Bicicleta::getMarca() {
    return this->marca;
}

string Bicicleta::getModelo() {
    return this->modelo;
}

float Bicicleta::getTamanhoQuadro() {
    return this->tamanhoQuadro;
}

float Bicicleta::getPreco() {
    return this->preco;
}

void Bicicleta::copiar(Bicicleta &outraBicicleta) {
    this->marca = outraBicicleta.marca;
    this->modelo = outraBicicleta.modelo;
    this->tamanhoQuadro = outraBicicleta.tamanhoQuadro;
    this->preco = outraBicicleta.preco;
}

void Bicicleta::preencher() {
    cout << "\n-------------------------------------------------\n";
    cout << "         Preencha os dados da Bicicleta         ";
    cout << "\n-------------------------------------------------\n";

    setMarca();
    setModelo();
    setTamanhoQuadro();
    setPreco();
}

void Bicicleta::imprimir() {
    cout << "\n-------------------------------------------------\n";
    cout << "         Imprimindo dados da Bicicleta         ";
    cout << "\n-------------------------------------------------\n\n";

    cout << "Marca: " << this->marca;
    cout << "\nModelo: " << this->modelo;
    
    if(this->tamanhoQuadro <= 99)
        cout << "\nTamanho do Quadro: " << this->tamanhoQuadro << " cm";
    if (this->tamanhoQuadro > 99){
        this->tamanhoQuadro = this->tamanhoQuadro/100;
        cout << "\nTamanho do Quadro: " << this->tamanhoQuadro << " m";
    }
        cout << "\nPreco: " << this->preco << " R$";
}