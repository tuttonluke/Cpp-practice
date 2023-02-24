#include <iostream>
using namespace std;

int main()
{   
    // regular while loop
    int index = 1;
    while(index <= 5){
        cout << index << endl;
        index ++;
    }

    // do while loop
    int index2 = 1;
    do{
        cout << index2 << endl;
        index2 ++;
    } while(index2 <= 5);

    return 0;
}