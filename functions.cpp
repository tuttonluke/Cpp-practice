#include <iostream>
#include <cmath>

using namespace std;

// function stub
void sayHi(string name, int age);

// main funciton
int main()
{   
    sayHi("Luke", 27);
    sayHi("Rachel", 23);

    return 0;
}

// define function
void sayHi(string name, int age)
{
    cout << "Hello " << name << " you are " << age << " years old." << endl;
}

