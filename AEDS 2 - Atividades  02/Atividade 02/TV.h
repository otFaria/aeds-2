#include <iostream>
#include <string>
using namespace std;

class TV{

    private:
        
        string marca;
        float tamanho;
        int resolucao;
        float preco;

    public:

        //Construtor

        TV();

        //Set

        void setMarca();
        void setTamanho();
        void setResolucao();
        void setPreco();

        //Get

        string getMarca();
        float getTamanho();
        int getResolucao();
        float getPreco();

        //Copia

        void copia (TV &outro);

        //Preencher

        void preencher();

        //Imprimir

        void Imprimir();
};