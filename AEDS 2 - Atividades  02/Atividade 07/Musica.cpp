#include "Musica.h"

Musica::Musica() {
    titulo = "";
    artista = "";
    duracao = 0;
    preco = 0.0;
}

Musica::Musica(Musica &outraMusica) {
    titulo = outraMusica.titulo;
    artista = outraMusica.artista;
    duracao = outraMusica.duracao;
    preco = outraMusica.preco;
}

void Musica::setTitulo() {
    cout << "Informe o titulo da musica: ";
    cin.ignore();
    getline(cin, this->titulo);
}

void Musica::setArtista() {
    cout << "Informe o artista da musica: ";
    getline(cin, this->artista);
}

void Musica::setDuracao(){
    do{
        cout << "Informe a duracao da musica (em minutos): ";
        cin >> this->duracao;
    }while(this->duracao < 0);
}

void Musica::setPreco() {
    do{
        cout << "Informe o preco da musica: ";
        cin >> this->preco;
    }while(this->preco < 0);
}

string Musica::getTitulo() {
    return this->titulo;
}

string Musica::getArtista() {
    return this->artista;
}

int Musica::getDuracao() {
    return this->duracao;
}

float Musica::getPreco() {
    return this->preco;
}

void Musica::copiar(Musica &outraMusica) {
    this->titulo = outraMusica.titulo;
    this->artista = outraMusica.artista;
    this->duracao = outraMusica.duracao;
    this->preco = outraMusica.preco;
}

void Musica::preencher() {
    cout << "\n-------------------------------------------------\n";
    cout << "             Preencha os dados da Musica             ";
    cout << "\n-------------------------------------------------\n";

    setTitulo();
    setArtista();
    setDuracao();
    setPreco();
}

void Musica::imprimir() {
    cout << "\n-------------------------------------------------\n";
    cout << "             Imprimindo dados da Musica              ";
    cout << "\n-------------------------------------------------\n";

    cout << "Titulo: " << this->titulo;
    cout << "\nArtista: " << this->artista;

    if(this->duracao < 60)
        cout << "\nDuracao: " << this->duracao << " minutos";

    else if (this->duracao >= 60)
        this->duracao = this->duracao/60;

    cout << "\nDuracao: " << this->duracao << " Horas";
    cout << "\nPreco: R$" << this->preco;
}