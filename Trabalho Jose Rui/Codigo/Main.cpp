#include "Produto.h"
#include "Nodo.h"
#include "FilaDuplamenteEncadeada.h"
#include <iostream>

using namespace std;

void MenuDeOpcoes() {
    cout << "-------------------------------------------\n";
    cout << "|               MENU OPCAO                |\n";
    cout << "-------------------------------------------\n";
    cout << "| 1- Inserir Elementos Na lista           |\n";
    cout << "| 2- Remover Elementos Na lista           |\n";
    cout << "| 0- Sair                                 |\n";
    cout << "-------------------------------------------\n";
}

int main() {
    char Opcao = 0;
    Product a;
    FilaDuplamenteEncadeada Fila;

    do {
        MenuDeOpcoes();
        cin >> Opcao;
        cout << "\t\t----------------------------\n";

        switch (Opcao) {
            case '1':
                Fila.Insert();
                break;
            case '2':
                Fila.Remove();
                break;
        }
        Fila.Print();
    } while (Opcao != 0);

    return 0;
}