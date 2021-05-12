#include "Account.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main()
{
	vector <Account*> all_Account;
	CheckingAccount ac2(80, 1), ac4(400, 0.5);
	SavingAccount ac1(25, 0.03), ac3(200, 0.015);
	all_Account.pb(&ac1);
	all_Account.pb(&ac2);
	all_Account.pb(&ac3);
	all_Account.pb(&ac4);

	cout << setiosflags(ios::fixed) << setprecision(2);
	
	for (int i = 0; i < 4; i++) {
		cout << "Account " << i + 1 << " balance: $" << all_Account[i]->getBalance() << endl;
		
		double temp;
		cout << "Enter an amount to withdraw from Account " << i + 1 << ": ";
		cin >> temp;
		all_Account[i]->debit(temp);

		cout << "Enter an amount to deposit into Account " << i + 1 << ": ";
		cin >> temp;
		all_Account[i]->credit(temp);

		if (typeid(*all_Account[i]) == typeid(SavingAccount)) {
			cout << "Adding &" << ((SavingAccount*)all_Account[i])->calculateInterest() << " interest to Account " << i + 1
				<< " (a SavingAccount)" << endl;
			all_Account[i]->credit(((SavingAccount*)all_Account[i])->calculateInterest());
		}

		cout << "Updated Account " << i + 1 << " balance: $" << all_Account[i]->getBalance() << endl;
		cout << endl;
	}
	return 0;
}