#include <iostream>
#include <string>
using namespace std;

class Motor{

    private:
        
        string tipo;
        int potencia;
        float consumo;

    public:

        //Construtor

        Motor();

        //Set

        void setTipo();
        void setPotencia();
        void setConsumo();
        

        //Get

        string getTipo();
        int getPotencia();
        float getConsumo();
};