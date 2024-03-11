#include "Produto.h"

//Construtor

Product::Product() {
    this->id = " ";
    this->name = " ";
    this->price = 0.0;
}

//Fill Product

void Product::Fill() {
    cout << "\n---------------------------------------------------------\n";
    cout << "                Preencha os seguintes dados                  ";
    cout << "\n---------------------------------------------------------\n\n";

    cout << "ID: ";
    this->setId();
    cout << "Name: ";
    this->setName();
    cout << "Price: ";
    this->setPrice();

    cout << "\nDados Preenchidos com sucesso\n";
}

//Print Product

void Product::PrintProduct(Product &a) {
    cout << "\n---------------------------------------------------------\n";
    cout << "                      Dados do Produto                       ";
    cout << "\n---------------------------------------------------------\n\n";

    cout << "ID: " << this->getId();
    cout << "\nName: " << this->getName();
    cout << "\nPrice: " << this->getPrice();


    cout << "\nProduto impresso com sucesso\n";
}

//Copy

void Product::Coppy(Product &a) {
    this->id = a.getId();
    this->name = a.getName();
    this->price = a.getPrice();
}

//Setters

void Product::setId() {
    cin >> this->id;
}

void Product::setName() {
    cin >> this->name;
}

void Product::setPrice() {
    cin >> this->price;
}

string Product::getId() {
    return this->id;
}

string Product::getName() {
    return this->name;
}

float Product::getPrice() {
    return this->price;
}