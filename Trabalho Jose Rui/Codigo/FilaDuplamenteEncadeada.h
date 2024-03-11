#include "Nodo.h"
#include <iostream>
using namespace std;

class FilaDuplamenteEncadeada {
    private:
        int quant;
        Nodo * head;
        Nodo * getElementoInPosition(int position);

    public:
        FilaDuplamenteEncadeada();
        FilaDuplamenteEncadeada(int quant, Nodo * head);
        FilaDuplamenteEncadeada(FilaDuplamenteEncadeada& orig);
        void Print();
        void Remove();
        void Insert();
        void setQuant(int quant);
        int getQuant();
        void setHead(Nodo * head);
        Nodo * getHead();
};