#include "HumanPlayer.h"
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

void HumanPlayer::step()
{
	cout << "请玩家选择：①石头 ②剪刀 ③布" << endl;
	char ch;
	while (1) {
		ch = _getch();
		if (ch == '1' || ch == '2' | ch == '3') {
			break;
		}
	}
	cout << "玩家出了";
	if (ch == '1') {
		cout << "“石头”；";
		choose = 石头;
	}
	if (ch == '2') {
		cout << "“剪刀”；";
		choose = 剪刀;
	}
	if (ch == '3') {
		cout << "“布”；";
		choose = 布;
	}	
	return;
}