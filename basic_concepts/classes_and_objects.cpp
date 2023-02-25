#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        // constructor functions
        Book(string name){
            cout << name << endl;
        }
};

int main()
{   

    Book book1("Ensaio Sobre a Cegueira");
    book1.title = "Ensaio Sobre a Cegueira";
    book1.author = "José Saramago";
    book1.pages = 200;

    Book book2("Cien Años de Soledad");
    book2.title = "Cien Años de Soledad";
    book2.author = "Gabriel García Márquez";
    book2.pages = 500;

    cout << book1.title << endl;
    cout << book2.author << endl;

    return 0;
}