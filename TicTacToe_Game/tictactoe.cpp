#include <iostream>
#include <vector>
using namespace std;
vector<vector<char>> board = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};
void display()
{
    cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << board[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "---|---|---" << endl;
    }
    cout << "\n";
}
bool play(char player)
{
    int move;
    cout << "Player " << player << ", enter your move (1-9): ";
    cin >> move;

    if (move < 1 || move > 9)
    {
        cout << "Invalid move!" << endl;
        return false;
    }

    int row = (move - 1) / 3, col = (move - 1) % 3;

    if (board[row][col] != ' ')
    {
        cout << "Already occupied! Try again." << endl;
        return false;
    }

    board[row][col] = player;
    return true;
}
int result()
{
    for (int i = 0; i < 3; i++)
        if ((board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) || (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]))
            return 1;

    if ((board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]))
        return 1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ') return 0;
    return 2;
}
int main()
{   
    char player = 'X';
    while (true)
    {
        display();
        if (!play(player)) continue;
        
        int r = result();
        if (r == 1)
        {
            display();
            cout << "Player " << player << " Wins!!" << endl;
            break;
        }
        if (r == 2)
        {
            display();
            cout << "It's a Draw!!" << endl;
            break;
        }
        player = (player == 'X') ? 'O' : 'X';
    }
    return 0;
}
