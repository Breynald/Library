#include "AIPlayer.h"
#include <bits/stdc++.h>
using namespace std;

void AIPlayer::step()
{
	srand((unsigned)time(NULL));
	int choose_ = rand() % 3 + 1;
	cout << "���Գ���";
	if (choose_ == 1) {
		cout << "��ʯͷ����";
		choose = ʯͷ;
	}
	if (choose_ == 2) {
		cout << "����������";
		choose = ����;
	}
	if (choose_ == 3) {
		cout << "��������";
		choose = ��;
	}
	return;
}