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

class Student {
    public:
        string name;
        string subject;
        double score;

        Student(string aName, string aSubject, double aScore){
            name = aName;
            subject = aSubject;
            score = aScore;
        }

        // Object functions
        bool hasHonours(){
            if(score >= 3.5){
                return true;
            }
            return false;
        }
};

int main()
{   

    Book book1("Ensaio Sobre a Cegueira", "José Saramago", 200);
    Book book2("Cien Años de Soledad", "Gabriel García Márquez", 500);
    Book book3;

    /*
    cout << book1.title << endl;
    cout << book2.author << endl;
    cout << book3.pages << endl;
    */

    Student student1("James", "Buisness", 2.4);
    Student student2("Jane", "Physics", 3.6);

    cout << student1.hasHonours() << endl;
    cout << student2.hasHonours() << endl;

    return 0;
}