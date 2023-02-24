#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    // 1D arrays
    int luckyNums[20] = {4, 8, 5, 42};

    cout << luckyNums[0] << endl;
    
    luckyNums[0] = 19; //modify element
    cout << luckyNums[0] << endl;
    cout << luckyNums << endl;

    // 2D arrays
    int numberGrid[3][2] = {
                            {1, 2},
                            {3, 4},
                            {5, 6}
                         };

    // nested for loop
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    return 0;
}