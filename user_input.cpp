#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    // // Entering integers, doubles, or characters
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // cout << "You are " << age << " years old." << endl;

    // Entering strings
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << endl;

    return 0;
}