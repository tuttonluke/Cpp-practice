#include <iostream>
#include <cmath>

using namespace std;

// function stubs
int getMax(int num1, int num2, int num3);

// main funciton
int main()
{
    bool isMale = false;
    bool isTall = false;

    // And operator: &&
    // Or operator: ||
    // Negation operator: !

    if(isMale && isTall){
        cout << "You are a tall male." << endl;

    } else if(isMale && !isTall) {
        cout << "You are a short male." << endl;
    
    } else if(!isMale && isTall){
        cout << "You are not male and tall." << endl;

    } else {
        cout << "You are neither male nor tall." << endl;
    }

    cout << getMax(2, 5, 10);

    return 0;   
}

int getMax(int num1, int num2, int num3) 
{
    int result;

    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if(num2 >=num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }

    return result;
}