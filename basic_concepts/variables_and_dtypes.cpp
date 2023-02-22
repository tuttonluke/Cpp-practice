#include <iostream>

using namespace std;

int main()
{   // Data Types
    char grade = 'A'; // single quotation marks
    string myString = "Girrafe"; // double quotes
    int myInt = 27;
    float myFloat = 2.8;
    double myDouble = 2.3; // conventionally use doubles
    bool myBool = true;

    cout << grade << endl;
    
    // A story to demonstrate variable assignment
    string characterName = "John";
    int characterAge;
    characterAge = 35;

    cout << "There once was a man named " << characterName << endl;
    cout << "he was " << characterAge << " years old" << endl;
    cout << "he liked the name " << characterName << endl;
    cout << "but did not like being " << characterAge << "." << endl;

    return 0;
}