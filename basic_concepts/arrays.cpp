#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    int luckyNums[20] = {4, 8, 5, 42};

    cout << luckyNums[0] << endl;
    
    luckyNums[0] = 19; //modify element
    cout << luckyNums[0] << endl;
    cout << luckyNums << endl;
    
    return 0;
}