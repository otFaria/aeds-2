#include <iostream>
#include "Carro.h"
using namespace std;

void PreencherDados (Carro * &carro){

     for (int i = 0; i < 3; i++){    
        carro[i].setNomeCliente();
        carro[i].setNomeCarro();
        carro[i].setMarca();
        carro[i].setMotorizacao();
        carro[i].setValor();
    }
}

void VerificaMotorizacao(Carro * &carro){

    //******    Verificando qual carro tem a motorização acima de 1.0   ******

    int ContadorMotorizacao = 0;

    cout << endl;
    cout << "-------------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < 3; i++){
        if (carro[i].getMotorizacao() > 1.0){

            cout << "O carro " << carro[i].getNomeCarro() << " tem a motorizacao acima de 1.0\n";
            ContadorMotorizacao++;
        }
    }
    cout << "\nO total de carros com a motorizacao acima de 1.0 e de: " << ContadorMotorizacao << " carros.\n"; 
    cout << "-------------------------------------------------------------------------------------------------" << endl;

}

void VerificaSeOsCarrosSaoIguais(Carro * &carro){

    // ********     Vefificando Quais Carros sao iguais     ********.

    int ContadorMarca = 0;

     if (carro[0].getMarca() == carro[1].getMarca()) {
        ContadorMarca += 2;
    }

    if (carro[1].getMarca() == carro[2].getMarca()) {
        ContadorMarca++;
    }
        
    string * MesmaMarca = new string[ContadorMarca];
    int AumentaVetor = 0;

    for (int i = 0; i < 2; i++) {
        if (carro[i].getMarca() == carro[i + 1].getMarca()) {

            MesmaMarca[AumentaVetor] = carro[i].getNomeCarro();
            AumentaVetor++;
            MesmaMarca[AumentaVetor] = carro[i + 1].getNomeCarro();
        }
    }

    if(ContadorMarca > 0){
        cout << "\nOs carros que pertencem a mesma marca sao eles: \n";

        for (int i = 0; i < ContadorMarca; i++) {
            cout << MesmaMarca[i] << endl;
        }
    }
    else{
        cout << "\n-------------------------------------";
        cout << "\n Nao existe carros de marcas iguais. \n";
        cout << "-------------------------------------\n";
    }
}

void VerificaPorcentagemMaiorValor(Carro * &carro){

    //********     Verifica a porcentagem do veiculo mais caro em cima do valor dos veiculos    ********
    
    float MaiorValor = 0;

    for (int i = 0; i < 3; i++){
        if(carro[i].getValor() > MaiorValor){
            MaiorValor = carro[i].getValor();
        }
    }
    
    float SDMV = 0; // SDMV = Soma dos menores valores.
    int CVI = 0; // CVI = Contador de Valores Iguais.
    float aux = 0;
 
    for (int i = 0; i < 3; i++){
        if (carro[i].getValor() < MaiorValor){
            SDMV += carro[i].getValor();
        }       

        if (carro[i].getValor() == MaiorValor){
            CVI++;
            aux = carro[i].getValor();
        }
    }
    
    if(CVI == 3){

        cout << "Todos os valores sao iguais, nao poderei realizar o calculo da porcentagem.\n";

    }else{
        
        //Agora irei fazer o calculo da porcentagem.

        float Media = 0;
        float porcentagem = 0;

        Media = SDMV/2;

        porcentagem = ((MaiorValor-Media)/Media)*100;

        cout << "\nA porcentagem que o carro mais caro tem a mais que os demais carro e de: " << porcentagem << "%";
    }
}

int main (){

    Carro * carro = new Carro [3];

    PreencherDados(carro);
    VerificaMotorizacao(carro);
    VerificaSeOsCarrosSaoIguais(carro);
    VerificaPorcentagemMaiorValor(carro);
    
    return 0;
}