#include <iostream>
using namespace std;

int main()
{   
    int secretNumber = 6;
    int userGuess;
    int guessCount = 0;
    int guessLimit = 3;

    cout << "Your guess must be an integer between 0 and 10. You have 3 lives." << endl;

    while(secretNumber != userGuess){
        cout << "Enter your guess: ";
        cin >> userGuess;
        guessCount++;
        
        if(userGuess == secretNumber){
            cout << "Correct!";
            break;
        } 

        if(guessCount == guessLimit){
            cout << "You lose!";
            break;
        }
    }

    return 0;
}