#include "HumanPlayer.h"
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

void HumanPlayer::step()
{
	cout << "�����ѡ�񣺢�ʯͷ �ڼ��� �۲�" << endl;
	char ch;
	while (1) {
		ch = _getch();
		if (ch == '1' || ch == '2' | ch == '3') {
			break;
		}
	}
	cout << "��ҳ���";
	if (ch == '1') {
		cout << "��ʯͷ����";
		choose = ʯͷ;
	}
	if (ch == '2') {
		cout << "����������";
		choose = ����;
	}
	if (ch == '3') {
		cout << "��������";
		choose = ��;
	}	
	return;
}