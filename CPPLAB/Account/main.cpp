#include <bits/stdc++.h>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
using namespace std;

int main()
{
	Account ac1(50);
	SavingAccount ac2(25, 0.03);
	CheckingAccount ac3(80, 1);

	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "account1 balance: $" << ac1.getBalance() << endl;
	cout << "account2 balance: $" << ac2.getBalance() << endl;
	cout << "account3 balance: $" << ac3.getBalance() << endl;
	cout << endl;

	cout << "Attempting to debit $25.00 from account1." << endl;
	ac1.debit(25);
	cout << endl;

	cout << "Attempting to debit $30.00 from account2." << endl;
	ac2.debit(30);
	cout << endl;

	cout << "Attempting to debit $40.00 from account3." << endl;
	ac3.debit(40);
	cout << endl;

	cout << "account1 balance: $" << ac1.getBalance() << endl;
	cout << "account2 balance: $" << ac2.getBalance() << endl;
	cout << "account3 balance: $" << ac3.getBalance() << endl;
	cout << endl;

	cout << "Crediting $40.00 to account1." << endl;
	ac1.credit(40);
	cout << endl;
	
	cout << "Crediting $65.00 to account2." << endl;
	ac2.credit(65);
	cout << endl;

	cout << "Crediting $20.00 to account3." << endl;
	ac3.credit(20);
	cout << endl;

	cout << "account1 balance: $" << ac1.getBalance() << endl;
	cout << "account2 balance: $" << ac2.getBalance() << endl;
	cout << "account3 balance: $" << ac3.getBalance() << endl;
	cout << endl;

	cout << "Adding $" << ac2.calculateInterest() << " interest to account2." << endl;
	ac2.credit(ac2.calculateInterest());
	cout << endl;

	cout << "New account2 balance: $" << ac2.getBalance() << endl;
	return 0;
}