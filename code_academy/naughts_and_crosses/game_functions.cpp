#include <iostream>
#include <limits>
#include <vector>

using namespace std;

void greet() 
{
  std::cout << "=============\n";
  std::cout << "Naughts and Crosses\n";
  std::cout << "=============\n";
}

void display_board(char board[3][3]) 
{
    cout << "\n-------------\n";
    for (int i=0; i<3; i++) {
        cout << "| ";
        for (int j=0; j<3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

int get_coordinate()
{
    int coordinate;
    while (!(std::cin >> coordinate) || coordinate < 1 || coordinate > 3) {
        cout << "Invalid input. Enter an integer between 1 and 3.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return coordinate;
}

bool check_for_win(char board[3][3], char player)
{
    //check for a win by rows
    for (int i=0; i<3; i++) { //cycle through rows
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
        {
            return true;
        } 
        //check for a win by columns
        else if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
        {
            return true;
        }
    }
    // check for a win by diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || (board[0][2] == player && board[1][1] == player && board[2][0] == player)){
        return true;
    }
    return false;
}
