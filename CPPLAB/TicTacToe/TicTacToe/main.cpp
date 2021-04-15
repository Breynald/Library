#include <bits/stdc++.h>
#include "TicTacToe.h"
using namespace std;

int main()
{
	TicTacToe contest;
	//choose
	cout << "fight with computer?(y/n):";
	char choose;
	do {
		cin >> choose;
	} while (choose != 'n' && choose != 'N' && choose != 'y' && choose != 'Y');
	if (choose == 'n' || choose == 'N') {
		while (1) {
			//display
			contest.print();
			//makemove
			int i, j;
			cout << "PLAYER " << contest.getCurrentPlayer() << endl;
			cout << "input index:";
			cin >> i >> j;
			while (!contest.isValidMove(i, j)) {
				cout << "illegal input!" << endl;
				cout << "input index:";
				cin >> i >> j;
			}
			contest.MakeMove(i, j);
			//judge whether finish
			if (contest.isDone()) {
				system("cls");
				contest.print();
				if (contest.getWinner() != '-')
					cout << "winner is " << contest.getWinner() << "!" << endl;
				else cout << "No winner!" << endl;
				break;
			}
			else {
				system("cls");
			}
		}
	}
	else {
		while (1) {
			//display
			contest.print();
			//makemove
			if (contest.getCurrentPlayer() == 'X'){
				int i, j;
				cout << "input index:";
				cin >> i >> j;
				while (!contest.isValidMove(i, j)) {
					cout << "illegal input!" << endl;
						cout << "input index:";
						cin >> i >> j;
				}
			contest.MakeMove(i, j);
			}
			else {
				contest.makeAutoMove();
			}
			//judge whether finish
			if (contest.isDone()) {
				system("cls");
				contest.print();
				if (contest.getWinner() == 'X')
					cout << "Winner is player!" << endl;
				else if (contest.getWinner() == 'O')
					cout << "Winner is computer!" << endl;
				else cout << "No winner!" << endl;
				break;
			}
			else {
				system("cls");
			}
		}
	}
	while (getchar() != '\n');
	return 0;
}