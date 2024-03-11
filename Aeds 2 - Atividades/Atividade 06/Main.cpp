#include <iostream>
#include "Motor.h"
using namespace std;

void Preencher (Motor * &motor){

    cout << "Ola, bom ve-lo por aqui, voce irar preencher os campos de perguntas a seguir.\n\n";

    for (int i = 0; i < 2; i++){
        motor[i].setTipo();
        motor[i].setPotencia();
        motor[i].setConsumo();
    }
    
    cout << endl;
}

void MaiorPotencia (Motor * &motor){

    int MaiorPTC = 0; //MaiorPTC = Maior Potencia

    for (int i = 0; i < 2; i++){
        
        if (motor[i].getPotencia() > MaiorPTC){
            
            MaiorPTC = motor[i].getPotencia();
        }
    }
    
    cout << "\nA maior potencia informada e de: " << MaiorPTC;

}

int main (){

    Motor * motor = new Motor [2];

    Preencher(motor);
    MaiorPotencia(motor);

    return 0;
}