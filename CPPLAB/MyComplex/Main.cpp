#include <bits/stdc++.h>
#include "MyComplex.h"
using namespace std;

int main()
{
	MyComplex p(2, 0), q(1, 0);
	p.show();
	p++;
	p.show();
	cin >> p;
	cout << p << endl;
	return 0;
}