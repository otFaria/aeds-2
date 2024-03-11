#include "TV.h"

//Construtor

TV::TV(){

    this->marca = " ";
    this->tamanho = 0.0;
    this->resolucao = 0;
    this->preco = 0.0;

}

//Copia

void TV::copia(TV &outro){

        this->marca = outro.getMarca();  
        this->tamanho = outro.getTamanho();
        this->resolucao = outro.getResolucao();    
        this->preco = outro.getPreco();
}

//Preencher

void TV::preencher(){

    cout << "\n-------------------------------------------------\n";
    cout << "            Preencha os dados da TV            ";
    cout << "\n-------------------------------------------------\n\n";

    cout << "Marca: ";
    cin >> this->marca;
    
    do{
        cout << "informe o tamanho em centimetros, que irei converter para polegadas\nTamanho: ";
        cin >> this->tamanho;
    }while(this->tamanho < 0);
    
  do {
    cout << "Resolucao (480 ou 720 ou 1080 ou 2160): ";
    cin >> this->resolucao;
} while (this->resolucao != 480 && this->resolucao != 720 && this->resolucao != 1080 && this->resolucao != 2160);


    do{
        cout << "Preco: ";
        cin >> this->preco;
    }while(preco < 0);
}

//imprimir

void TV::Imprimir(){

    cout << "\n-----------------------------------------------------\n";
    cout << "             Imprimindo a TV " << this->marca;
    cout << "\n-----------------------------------------------------\n";

    cout << "Tamanho: " << (float)this->tamanho*0.39 << " Polegadas";
    cout << "\nResolucao: " << this->resolucao << "p";
    cout << "\nPreco: " << this->preco << endl;
}   

//Set


void TV::setMarca(){

    cout << "\nMe informe a marca da TV: ";
    cin >> this->marca;
}

void TV::setTamanho(){

    cout << "\nMe informe  o tamanho da TV " << this->getMarca() << ": ";
    cin >> this->tamanho;
}

void TV::setResolucao(){

    cout << "\nMe informe a resolucao da TV " << this->getMarca() << ": ";
    do{
        cin >> this->resolucao;
    }while(resolucao < 480 || resolucao > 2160);
}

void TV::setPreco(){

    cout << "\nAgora me informe o preco da TV " << this->getMarca() << ": ";
    do{
        cin >> this->preco;
    }while(preco < 0);
}

//Get

string TV::getMarca(){
    return this->marca;
}

float TV::getTamanho(){
    return this->tamanho;
}

int TV::getResolucao(){
    return this->resolucao;
}

float TV::getPreco(){
    return this->preco;
}