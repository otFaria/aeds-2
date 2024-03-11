#include <iostream>
#include <string>
using namespace std;

class Carro{

    private:

    //Foi inclementado o nome do cliente para o software ficar um pouco mais intuitivo.

        string nomeCliente;
        string nomeCarro;
        string marca;
        float motorizacao;
        string cor;
        float valor;
    
    public:

        //Construtor

        Carro();

        //Construtor de copia

        Carro(Carro &outro);

        //Set

        void setNomeCliente();
        void setNomeCarro();
        void setMarca();
        void setCor();
        void setMotorizacao();
        void setValor();

        //Get

        string getNomeCliente();
        string getNomeCarro();
        string getMarca();
        string getCor();
        float getMotorizacao();
        float getValor();

        //Imprimir

        void imprimir();
};