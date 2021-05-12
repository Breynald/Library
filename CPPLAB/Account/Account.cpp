#include "Account.h"
#include <bits/stdc++.h>
using namespace std;

Account::Account(double set)
{
	if (set < 0){
		balance = 0;
		cout << "balance initialize failed" << endl;
	}
	else {
		balance = set;
	}
}

bool Account::credit(double in)
{
	if (in < 0) {
		cout << "failed" << endl;
		return false;
	}
	else {
		balance += in;
		return true;
	}
}

bool Account::debit(double out)
{
	if (out < 0) {
		cout << "failed" << endl;
		return false;
	}
	else {
		if (out > balance) {
			cout << "Debit amount exceeded account balance." << endl;
			return false;
		}
		else {
			balance -= out;
			return true;
		}
	}
}

double Account::getBalance()
{
	return balance;
}
