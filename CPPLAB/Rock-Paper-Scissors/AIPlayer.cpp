#include "AIPlayer.h"
#include <bits/stdc++.h>
using namespace std;

void AIPlayer::step()
{
	srand((unsigned)time(NULL));
	int choose_ = rand() % 3 + 1;
	cout << "电脑出了";
	if (choose_ == 1) {
		cout << "“石头”；";
		choose = 石头;
	}
	if (choose_ == 2) {
		cout << "“剪刀”；";
		choose = 剪刀;
	}
	if (choose_ == 3) {
		cout << "“布”；";
		choose = 布;
	}
	return;
}