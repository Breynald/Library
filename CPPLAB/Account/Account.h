#pragma once

class Account
{
public:
	Account() {};
	Account(double set);
	bool credit(double in);
	bool debit(double out);
	double getBalance();
protected:
	double balance;
};