#include <bits/stdc++.h>
using namespace std;

class TicTacToe
{
private:
    char board[3][3];
    char CurrentPlayer;
public:
    TicTacToe();
    void print();
    char getCurrentPlayer();
    void MakeMove(int i, int j);
    bool isDone();
    bool isValidMove(int i, int j);
    char getWinner();
    void makeAutoMove();
};