#include <iostream>
#include <cmath>

using namespace std;

// function stubs
void sayHi(string name, int age);
double cube(double num);

// main funciton
int main()
{   
    sayHi("Luke", 27);
    sayHi("Rachel", 23);

    double answer = cube(5.0);
    cout << answer;

    return 0;
}

// define function
void sayHi(string name, int age)
{
    cout << "Hello " << name << " you are " << age << " years old." << endl;
}

// function with return statement
double cube(double num)
{
    double result = num * num * num;
    
    return result;
}