#include <iostream>
#include <string>
using namespace std;

class Filme {

private:

    string titulo;
    string diretor;
    float duracao;
    float preco;

public:

    // Construtores

    Filme();
    Filme(Filme &outroFilme);

    // Setters

    void setTitulo();
    void setDiretor();
    void setDuracao();
    void setPreco();

    // Getters
    
    string getTitulo();
    string getDiretor();
    int getDuracao();
    float getPreco();

    // Métodos

    void copiar(Filme &outroFilme);
    void preencher();
    void imprimir();

};