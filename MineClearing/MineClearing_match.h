#pragma once

class Match
{
public:
	Match(int, int, int);
	void begin();
	void showall();
	void test();
private:
	int map1[200][200], map2[200][200];
	int L, H;
	int S;

};