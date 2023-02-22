#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    int wholenum = 5;
    double doublenum = 5.5;

    wholenum++; //adds 1
    wholenum--; //substracts 1
    wholenum += 42;
    cout << wholenum << endl;

    cout << 10 / 3 << endl; //operations with integers will only return integers

    //maths functions
    cout << pow(2, 5) << endl; // powers
    cout << sqrt(2) << endl; // sqrt
    cout << round(4.6) << endl;
    cout << ceil(4.6) << endl; 
    cout << floor(4.6) << endl;
    cout << fmax(4.6, 10) << endl; // returns largest
    cout << fmin(4.6, 10) << endl; // returns smallest

    return 0;
}