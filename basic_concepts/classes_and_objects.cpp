#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        // constructor functions
        Book(){
            title = "No title.";
            author = "No author.";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{   

    Book book1("Ensaio Sobre a Cegueira", "José Saramago", 200);
    Book book2("Cien Años de Soledad", "Gabriel García Márquez", 500);
    Book book3;


    cout << book1.title << endl;
    cout << book2.author << endl;
    cout << book3.pages << endl;

    return 0;
}