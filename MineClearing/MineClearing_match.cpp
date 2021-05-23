#include <bits/stdc++.h>
#include "MineClearing_match.h"
using namespace std;

//********************************
void Match::test()
{
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < H; j++)
		{
			cout << map2[i][j] << ' ';
		}
		cout << endl;
	}
}
//*******************************



Match::Match(int _L, int _H, int _S)
{
	L = _L;
	H = _H;
	S = _S;
	memset(map1, 0, sizeof(map1));
	memset(map2, 0, sizeof(map2));
	srand((unsigned)time(NULL));
	for (int i = 0; i < S; i++) {
		int a, b;
		do
		{
			a = rand() % L;
			b = rand() % H;
		} while (map1[a][b]);
		map1[a][b] = 1;
	}

	int near[8][2] = { {1,0}, {0,1}, {-1,0}, {0,-1}, {1,1}, {-1,-1}, {1,-1}, {-1,1} };
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < H; j++)
		{
			if (map1[i][j] == 1)
			{
				map2[i][j] = -1;
				continue;
			}
			int sum = 0;
			for (int k = 0; k < 8; k++)
			{
				int a = i + near[k][0];
				int b = j + near[k][1];
				if (a < 0 || b < 0 || a >= L || b >= H) continue;
				if (map1[a][b]==1) sum++;
			}
			map2[i][j] = sum;
		}
	}
}

void Match::begin()
{
	while (1)
	{
		//display
		system("cls");
		int judge = 0;

		for (int i = 0; i < L; i++)
		{
			for (int j = 0; j < H; j++)
			{
				if (map2[i][j] == 10) cout << 'O' << ' ';
				else if (map2[i][j] > 10 && map2[i][j] < 19) cout << map2[i][j] - 10 << ' ';
				else
				{
					cout << '#' << ' ';
					judge++;
				}
			}
			cout << endl;
		}

		//judge whether win
		if (judge == S)
		{
			cout << "WIN!" << endl;
			break;
		}

		//make step
		int x, y;
		cin >> x >> y;
		x--;y--;
		if (map2[x][y] > 0) map2[x][y] += 10;
		else if (map2[x][y] == -1)
		{
			showall();
			cout << "GAME OVER!" << endl;
			break;
		}
		else
		{
			int near[4][2] = { {1,0}, {0,1}, {-1,0}, {0,-1} };
			queue <pair<int, int>> q;
			q.push(make_pair(x, y));
			map2[x][y] = 10;
			while (!q.empty())
			{
				int tx = q.front().first, ty = q.front().second;
				for (int i = 0; i < 4; i++)
				{
					int a = tx + near[i][0];
					int b = ty + near[i][1];
					if (a < 0 || b < 0 || a >= L || b >= H) continue;
					if (map2[a][b] == 0)
					{
						map2[a][b] = 10;
						q.push(make_pair(a, b));
					}
					else if (map2[a][b] > 0 && map2[a][b] < 10) map2[a][b] += 10;
				}
				q.pop();
			}
		}
	}
}


void Match::showall()
{
	system("cls");
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < H; j++)
		{
			if (map2[i][j] == 10 || map2[i][j] == 0) cout << 'O' << ' ';
			else if (map2[i][j] == -1) cout << '@' << ' ';
			else if (map2[i][j] > 10) cout << map2[i][j] - 10 << ' ';
			else cout << map2[i][j] << ' ';
		}
		cout << endl;
	}
}