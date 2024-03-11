
#include "Nodo.h"

//Construtor

Nodo::Nodo() {
    this->ant = NULL;
    this->prox = NULL;
}

Nodo::Nodo(Nodo * ant, Nodo *prox, Product item) {
    this->ant = ant;
    this->prox = prox;
    this->item = item;
}

Nodo::Nodo(Nodo& orig) {
    this->ant = orig.getAnt();
    this->prox = orig.getProx();
    this->item = orig.getItem();
}

//GetAnt e SetAnt

void Nodo::setAnt(Nodo *ant) {
    this-> ant = ant;
}

Nodo* Nodo::getAnt(){
    return ant;
}

//SetProx e GetProx

void Nodo::setProx(Nodo *prox) {
    this->prox = prox;
}

Nodo* Nodo::getProx(){
    return prox;
}

//SetItem e GetItem

void Nodo::setItem(Product item) {
    this->item = item;
}

Product Nodo::getItem(){
    return item;
}