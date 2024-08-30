#include <iostream>
#include <vector>
#include "game_functions.hpp"

using namespace std;

int main() {
    greet();

    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    display_board(board);

    for (int i=0; i<9; i++) 
    {   
        // PLAYER 1
        while (true)
        {
            // Get coordinates
            cout << "\nPlayer 1 enter row:\n";
            int player_1_row = get_coordinate();

            cout << "\nPlayer 1 enter column:\n";
            int player_1_column = get_coordinate();

            cout << "You chose: (" << player_1_row << ", " << player_1_column << ")" << "\n";

            // Update board if a valid tile was chosen
            if (board[player_1_row-1][player_1_column-1] == 'X' || board[player_1_row-1][player_1_column-1] == 'O') {
                cout << "Someone has already gone there! Choose another tile.\n";
                display_board(board);
            } else {
                board[player_1_row-1][player_1_column-1] = 'X';
                //check for win
                if (i>1 && check_for_win(board, 'X'))
                {
                    display_board(board);
                    cout << "Player 1 Wins!\n";
                    return 0;
                }
                display_board(board);
                break;
            }
        }
        display_board(board);
        
        // PLAYER 2
        while (true)
        {
            // Get coordinates
            cout << "\nPlayer 2 enter row:\n";
            int player_2_row = get_coordinate();

            cout << "\nPlayer 2 enter column:\n";
            int player_2_column = get_coordinate();

            cout << "You chose: (" << player_2_row << ", " << player_2_column << ")" << "\n";

            // Update board if a valid tile was chosen
            if (board[player_2_row-1][player_2_column-1] == 'X' || board[player_2_row-1][player_2_column-1] == 'O') {
                cout << "Someone has already gone there! Choose another tile.\n";
                display_board(board);
            } else {
                board[player_2_row-1][player_2_column-1] = 'O';
                //check for win
                if (i>1 && check_for_win(board, 'O'))
                {
                    display_board(board);
                    cout << "Player 2 Wins!\n";
                    return 0;
                }
                display_board(board);
                break;
            }
        }
    }
}
   
    




