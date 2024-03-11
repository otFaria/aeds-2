#include <iostream>
#include "string"
using namespace std;

class Livro{

    private:
        
        string autor;
        string titulo;
        string editora;
        int paginas;

    public:

         //Construtor

        Livro();

        //Set

        void setAutor();
        void setTitulo();
        void setEditora();
        void setNumeroDePaginas();

        //Get

        string getAutor();
        string getTitulo();
        string getEditora();
        int getNumeroDePaginas();
};