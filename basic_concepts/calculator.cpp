#include <iostream>
#include <cmath>

using namespace std;

// stubs
int simpleCalc();
double betterCalc();

int main()
{   
    cout << betterCalc();

    return 0;
}


int simpleCalc(){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    return num1 + num2;
}

double betterCalc(){
    double num1;
    double num2;
    double result;
    char op; // operator

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    if(op == '+'){
        return num1 + num2;
    } else if(op == '-') {
        return num1 - num2;
    } else if(op == '*') {
        return num1 * num2;
    } else if(op == '/') {
        return num1 / num2;
    } else {
        cout << "Invalid operator.";
    }
}