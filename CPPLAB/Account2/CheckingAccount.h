#pragma once
#include "Account.h"

class CheckingAccount : public Account
{
public:
	CheckingAccount(double, double);
	bool credit(double);
	bool debit(double);
private:
	double feechargedpertransaction;
};