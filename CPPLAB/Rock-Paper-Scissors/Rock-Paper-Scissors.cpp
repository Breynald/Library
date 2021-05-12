#include "AIPlayer.h"
#include "HumanPlayer.h"
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
int player_win, ai_win, balance;

void judge(AIPlayer& AIP, HumanPlayer& HP)
{
	int aic = AIP.getchoose();
	int hpc = HP.getchoose();
	if (aic == hpc) {
		balance++;
		cout << "本局平局；" << endl;
	}
	else if ((aic == 1 && hpc == 2) || (aic == 2 && hpc == 3) || (aic == 3 && hpc == 1)) {
		ai_win++;
		cout << "本局电脑获胜；" << endl;
	}
	else {
		player_win++;
		cout << "本局玩家获胜；" << endl;
	}
	return;
}

int main()
{
	AIPlayer AIP;
	HumanPlayer HP;
	
	while (1) {
		HP.step();
		AIP.step();
		judge(AIP, HP);
		cout << "再玩一轮？（回车键确认，其他键退出。）" << endl << endl;
		char ch;
		if ((ch = _getch()) != 13) {
			cout << "玩家获胜" << player_win << "局；电脑获胜"
				<< ai_win << "局；战平" << balance << "局。" << endl;
			cout << "最终结果：";
			if (player_win > ai_win) cout << "玩家胜出！";
			if (player_win < ai_win) cout << "电脑胜出！";
			if (player_win == ai_win) cout << "平局！";
			break;
		}
	}


	return 0;
}