#include "Filme.h"

Filme::Filme() {
    titulo = "";
    diretor = "";
    duracao = 0;
    preco = 0.0;
}

Filme::Filme(Filme &outroFilme) {
    titulo = outroFilme.titulo;
    diretor = outroFilme.diretor;
    duracao = outroFilme.duracao;
    preco = outroFilme.preco;
}

void Filme::setTitulo() {
    cout << "Informe o titulo do filme: ";
    cin.ignore();
    getline(cin, this->titulo);
}

void Filme::setDiretor() {
    cout << "Informe o diretor do filme: ";
    getline(cin, this->diretor);
}

void Filme::setDuracao(){
    do{
        cout << "Informe a duracao do filme (em minutos): ";
        cin >> this->duracao;
    }while(this->duracao < 0);
}

void Filme::setPreco() {
    do{
        cout << "Informe o preco do filme: ";
        cin >> this->preco;
    }while(this->preco < 0);
}

string Filme::getTitulo() {
    return this->titulo;
}

string Filme::getDiretor() {
    return this->diretor;
}

int Filme::getDuracao() {
    return this->duracao;
}

float Filme::getPreco() {
    return this->preco;
}

void Filme::copiar(Filme &outroFilme) {
    this->titulo = outroFilme.titulo;
    this->diretor = outroFilme.diretor;
    this->duracao = outroFilme.duracao;
    this->preco = outroFilme.preco;
}

void Filme::preencher() {
    cout << "\n-------------------------------------------------\n";
    cout << "         Preencha os dados do Filme         ";
    cout << "\n-------------------------------------------------\n";

    setTitulo();
    setDiretor();
    setDuracao();
    setPreco();
}

void Filme::imprimir() {
    cout << "\n-------------------------------------------------\n";
    cout << "         Imprimindo dados do Filme         ";
    cout << "\n-------------------------------------------------\n";

    cout << "Titulo: " << this->titulo;
    cout << "\nDiretor: " << this->diretor;

    if(this->duracao < 60)
        cout << "\nDuracao: " << this->duracao << " minutos";

    else if (this->duracao >= 60)
        this->duracao = this->duracao/60;

    cout << "\nDuracao: " << this->duracao << " Horas";
    cout << "\nPreco: R$" << this->preco;
}