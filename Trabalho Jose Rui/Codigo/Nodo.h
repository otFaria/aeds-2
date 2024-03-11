#include "Produto.h"
#include <iostream>
using namespace std;

class Nodo{

    private:
        Nodo* ant;
        Nodo* prox;
        Product item;

    public:

        //Construtor
        Nodo();
        Nodo(Nodo* ant, Nodo* prox, Product item);
        Nodo(Nodo& orig);

        //GetAnt e SetAnt

        void setAnt(Nodo* ant);
        Nodo* getAnt();

        //SetProx e GetProx
        void setProx(Nodo* prox);
        Nodo* getProx();

        //SetItem e GetItem

        void setItem(Product item);
        Product getItem();
};