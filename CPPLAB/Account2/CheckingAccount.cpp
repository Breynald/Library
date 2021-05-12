#include "CheckingAccount.h"
#include <bits/stdc++.h>
using namespace std;

CheckingAccount::CheckingAccount(double set1, double set2)
{
	if (set1 < 0) {
		balance = 0;
		cout << "balance initialize failed" << endl;
	}
	else {
		balance = set1;
	}
	if (set2 < 0) {
		feechargedpertransaction = 0;
		cout << "feechargedpertransaction initialize failed" << endl;
	}
	else {
		feechargedpertransaction = set2;
	}
}

bool CheckingAccount::credit(double in)
{
	if (Account::credit(in)) {
		balance -= feechargedpertransaction;
		cout << "$" << feechargedpertransaction << " transaction fee charged." << endl;
		return true;
	}
	else {
		return false;
	}
}

bool CheckingAccount::debit(double out)
{
	if (Account::debit(out)) {
		balance -= feechargedpertransaction;
		cout << "$" << feechargedpertransaction << " transaction fee charged." << endl;
		return true;
	}
	else {
		return false;
	}
}