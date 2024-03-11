#include "FilaDuplamenteEncadeada.h"

FilaDuplamenteEncadeada::FilaDuplamenteEncadeada() {
    this->quant = 0;
    this-> head = NULL;
}

FilaDuplamenteEncadeada::FilaDuplamenteEncadeada(int quant, Nodo *head) {
    this->head = head;
    this->quant = quant;
}

FilaDuplamenteEncadeada::FilaDuplamenteEncadeada(FilaDuplamenteEncadeada &orig) {
    this->head = orig.getHead();
    this->quant = orig.getQuant();
}

void FilaDuplamenteEncadeada::setQuant(int quant) {
    this->quant = quant;
}

int FilaDuplamenteEncadeada::getQuant(){
    return quant;
}

void FilaDuplamenteEncadeada::setHead(Nodo *head) {
    this->head = head;
}

Nodo * FilaDuplamenteEncadeada::getHead(){
    return head;
}

void FilaDuplamenteEncadeada::Insert() {
    Product p;
    p.Fill();
    Nodo * novo = new Nodo();
    novo->setItem(p);
    novo = head->getProx();
    head = novo;
    quant++;
}

Nodo * FilaDuplamenteEncadeada::getElementoInPosition(int position){
    if (this->head != NULL && position >= 1 && position <= quant) {

        Nodo * anterior = this->head;

        for (int i = 1; i < position - 1; ++i) {
            anterior = anterior->getProx();
        }

        return anterior;

    }else {
        cout << "\nErro GetElemento\n";
    }
}

void FilaDuplamenteEncadeada::Remove(){
    if(this->quant > 0 ){
        this->head = head->getProx();
        this->quant--;
    }
    else{
        cout << "\nNao foi possivel remover pois a lista nao contem elementos\n";
    }
}

void FilaDuplamenteEncadeada::Print() {
    cout << "\n>> List [ ";
    Nodo * a = head;
    Product p;
    while (a != NULL) {
        p = a->getItem();
        p.PrintProduct(p);
        a = a->getProx();
    }

    cout << " ] \n";
}