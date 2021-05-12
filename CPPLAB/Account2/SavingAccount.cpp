#include "SavingAccount.h"
#include <bits/stdc++.h>
using namespace std;

SavingAccount::SavingAccount(double set1, double set2)
{
	if (set1 < 0) {
		balance = 0;
		cout << "balance initialize failed" << endl;
	}
	else {
		balance = set1;
	}
	if (set2 < 0) {
		interestrate = 0;
		cout << "interestrate initialize failed" << endl;
	}
	else {
		interestrate = set2;
	}
}

double SavingAccount::calculateInterest()
{
	return balance * interestrate;
}