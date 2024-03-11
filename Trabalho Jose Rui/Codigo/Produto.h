#include <iostream>
#include <string>

using namespace std;

#ifndef CLION_PRODUTO_H
#define CLION_PRODUTO_H


class Product{

private:

    string id;
    string name;
    float price;

public:

    //Constructor

    Product();

    //Fill Product

    void Fill();

    //Print Product

    void PrintProduct(Product &a);

    //Coppy

    void Coppy(Product &a);

    //Getters

    string getId();
    float getPrice();
    string getName();

    //Setters
    void setId();
    void setPrice();
    void setName();

};


#endif //CLION_PRODUTO_H
