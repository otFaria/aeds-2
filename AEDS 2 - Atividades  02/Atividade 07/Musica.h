#include <iostream>
#include <string>
using namespace std;

class Musica {

private:

    string titulo;
    string artista;
    float duracao;
    float preco;

public:

    // Construtores

    Musica();
    Musica(Musica &outraMusica);

    // Setters

    void setTitulo();
    void setArtista();
    void setDuracao();
    void setPreco();

    // Getters
    
    string getTitulo();
    string getArtista();
    int getDuracao();
    float getPreco();

    // Métodos

    void copiar(Musica &outraMusica);
    void preencher();
    void imprimir();

};