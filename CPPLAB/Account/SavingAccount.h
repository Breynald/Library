#pragma once
#include "Account.h"
class SavingAccount : public Account
{
public:
	SavingAccount(double, double);
	double calculateInterest();
private:
	double interestrate;
};