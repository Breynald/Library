#include <bits/stdc++.h>
#include "TicTacToe.h"
using namespace std;

TicTacToe::TicTacToe()
{
	memset(board, '-', sizeof(board));
	CurrentPlayer = 'X';
}

void TicTacToe::print()
{
	for (int i = 0; i < 4; i++)
	{
		if (i == 0)cout << "  ";
		else cout << i << ' ';
	}
	cout << endl;
	for (int i = 1; i <= 3; i++)
	{
		cout << i << ' ';
		for (int j = 0; j < 3; j++)
			cout << board[i - 1][j] << ' ';
		cout << endl;
	}
}

char TicTacToe::getCurrentPlayer()
{
	return CurrentPlayer;
}

void TicTacToe::MakeMove(int i, int j)
{	
	
	board[i - 1][j - 1] = CurrentPlayer;
	if (CurrentPlayer == 'X') CurrentPlayer = 'O';
	else CurrentPlayer = 'X';
}

bool TicTacToe::isDone()
{
	bool flag1 = false, flag2 = false;
	for (int i = 0; i < 3; i++)
	{
		char now = board[i][0];
		if (now == board[i][1] && now == board[i][2] && now!='-')
		{
			flag1 = true;
			break;
		}
	}
	if (!flag1)
	{
		for (int i = 0; i < 3; i++)
		{
			char now = board[0][i];
			if (now == board[1][i] && now == board[2][i] && now != '-')
			{
				flag1 = true;
				break;
			}
		}
	}
	if (!flag1)
	{
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0]!='-')
			flag1 = true;
		else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2]!='-')
			flag1 = true;
	}
	if (!flag2)
	{
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				if (board[i][j] == '-')
					flag2 = true;
	}
	if (flag1 || !flag2) {/*cout << "Done!" << endl;*/ return true; }
	else {/*cout << "Not Done!" << endl;*/ return false; }
}

bool TicTacToe::isValidMove(int i, int j)
{
	if (board[i - 1][j - 1] != '-') return false;
	if (i > 0 && i <= 3 && j > 0 && j <= 3) return true;
	else return false;
}

char TicTacToe::getWinner()
{
	char flag = '-';
	for (int i = 0; i < 3; i++)
	{
		char now = board[i][0];
		if (now == board[i][1] && now == board[i][2] && now != '-')
		{
			flag = now;
			break;
		}
	}
	if (flag == '-')
	{
		for (int i = 0; i < 3; i++)
		{
			char now = board[0][i];
			if (now == board[1][i] && now == board[2][i] && now != '-')
			{
				flag = now;
				break;
			}
		}
	}
	if (flag == '-')
	{
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-')
			flag = board[0][0];
		else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-')
			flag = board[0][2];
	}
	return flag;
}

void TicTacToe::makeAutoMove()
{
	int i, j;
	srand((unsigned)time(NULL));
	do
	{
		i = rand() % 3 + 1;
		j = rand() % 3 + 1;
	} while (!isValidMove(i, j));
	MakeMove(i, j);
}