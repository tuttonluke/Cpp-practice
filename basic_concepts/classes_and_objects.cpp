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

// Constructors
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

// Object functions
class Movie {
    private:
        string rating;
    public:
        string title;
        string director;


        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating){
            if(aRating == "U" || aRating == "PG"|| aRating == "12"|| aRating == "15"|| aRating == "18"|| aRating == "NR"){
                rating = aRating;
            } else {
                rating = "NR";
            }
        }

        string getRating(){
            return rating;
        }

};

// Inheritance
class Chef {
    public:
        void makeChicken(){
            cout << "The chef makes chicken." << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad." << endl;
        }     
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs." << endl;
        }
};

class ItalianChef : public Chef {
    public:
        void makePasta() {
            cout << "The chef makes pasta." << endl;
        } 
        void makeSpecialDish(){
            cout << "The chef makes lasagne." << endl;
        }
};



int main()
{   
    /* Simple class
    Book book1("Ensaio Sobre a Cegueira", "José Saramago", 200);
    Book book2("Cien Años de Soledad", "Gabriel García Márquez", 500);
    Book book3;
    cout << book1.title << endl;
    cout << book2.author << endl;
    cout << book3.pages << endl;
    */


    /* Constructors
    Student student1("James", "Buisness", 2.4);
    Student student2("Jane", "Physics", 3.6);
    cout << student1.hasHonours() << endl;
    cout << student2.hasHonours() << endl;
    */


    /* Object functions
    Movie fellowship("Fellowship of the Ring", "Peter Jackson", "12");
    cout << fellowship.getRating() << endl;
    fellowship.setRating("Dog");
    cout << fellowship.getRating() << endl;
    */

    // Inheritance
    Chef chef;
    ItalianChef italianChef;

    italianChef.makeChicken();
    italianChef.makePasta();
    chef.makeSpecialDish();
    italianChef.makeSpecialDish();

    return 0;
}