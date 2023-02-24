#include <iostream>
using namespace std;

int power(int baseNum, int powNum){
    int result = 1;
    for(int i = 0; i < powNum; i++){
        result = result * baseNum;
    }

    return result;
}


int main()
{   
    int baseNum;
    int powerNum;

    cout << "Enter base number: ";
    cin >> baseNum;

    cout << "Enter power: ";
    cin >> powerNum;

    cout << power(baseNum, powerNum);


    return 0;
}