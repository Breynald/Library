#include <bits/stdc++.h>
using namespace std;
class Money
{
    private:
        double money;
    public:
        Money() {money = 0.0;}
        Money(double begin) {money = begin;}
        void deposit(double amount) {money += amount;}
        void withdraw(double amount)
        {
            if(money < amount)
            {
                double temp = money;
                money = 0.0;
                cout << "取出了" << fixed << setprecision(2) << temp << "元" << endl;
            }
            else
            {
                money -= amount;
                cout << "取出了" << fixed << setprecision(2) << amount << "元" << endl;
            }
        }
        void showmoney() { cout << fixed << setprecision(2) << "当前有" << money << "元" << endl;}
};



int main()
{
    freopen("out.txt", "w", stdout);
    
    int a[10]{1};
    for(int i=0; i<10; i++)
        cout << a[i] << ' ';

    return 0;
}