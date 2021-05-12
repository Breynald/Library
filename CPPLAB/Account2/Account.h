#pragma once

class Account
{
public:
	Account() {};
	Account(double set);
	virtual bool credit(double in);
	virtual bool debit(double out);
	double getBalance();
protected:
	double balance;
};