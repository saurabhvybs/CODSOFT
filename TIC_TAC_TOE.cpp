#include <iostream>
#include <string>
using namespace std;

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkwin();
void board(string &n1, string &n2);

int main()
{
    char play_again='y';
    do
    {
        
    int player = 1, i, choice;
    string n1, n2;
    cout << "Enter the name of First player: \n";
    cin>>n1;
    cout << "Enter the name of Second player: \n";
    cin>>n2;

    char mark;
    do
    {
        board(n1, n2);
        player = (player % 2) ? 1 : 2; // Deciding the turn of the player.

        if (player == 1) // Check which player it is and print his/her name accordingly.
            cout << "Player " << n1 << ", enter a number:  ";
        else
            cout << "Player " << n2 << ", enter a number:  ";
        cin >> choice; // Storing the choice of player wher he/she wants to mark.

        mark = (player == 1) ? 'X' : 'O'; // Mark X for first player and O for second player.

        if (choice == 1 && square[1] == '1') // check if square 1 is free or not or if already marked,if player makes a choice 1.

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout << "Invalid move "; // if player choose a square which is already done then it will show invalid move.

            player--;     // this is done so that the chance remains with the same player who made a wrong move. Else Move will be transfered to other player.
            cin.ignore(); // this will remove unnecessary garbage before taking another value in string.
            cin.get();
        }
        i = checkwin();

        player++;
    } while (i == -1);
    board(n1, n2);
    if (i == 1)
    {
        if (player == 1)
            cout << n2 << " win ";
        else
            cout << n1 << " win ";
    }
    else
        cout << "==>\aGame draw";

    cin.ignore();
    cin.get();
    cout<<"Would you like to play again?(y/n): ";
    cin>>play_again;
    } while (play_again=='y');
    
    return 0;
}

/*********************************************
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}

// THIS FUNCTION WILL DRAW A BOARD OF TIC TAC TOE

void board(string &n1, string &n2)
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << n1 << " (x) - " << n2 << " (O)" << endl
         << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " <<"\n"<<"\n";
}