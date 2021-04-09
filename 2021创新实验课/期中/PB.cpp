#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define ll long long

int check(int num1, int num2)
{
    if(num2 < 10000) return 0;
    int book[10];
    memset(book, 0, sizeof(book));
    
    int temp;
    if(num1 < 10000)
    {
        book[0] = 1;
        temp = 4;
    }else temp = 5;

    for(int i=0; i<5; i++){
        int t = num2 % 10;
        if(book[t]) return 0;
        book[t] = 1;
        num2 /= 10;
    }
    
    for(int i=0; i<temp; i++){
        int t = num1 % 10;
        if(book[t]) return 0;
        book[t] = 1;
        num1 /= 10;
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n, t=0;
    while(1)
    {
        int flag = 0;
        cin >> n;
        if(n == 0) break;
        if(t++)
            cout << endl;
        for(int i=1234; i<100000; i++){
            if(i*n > 98765) break;
            if(!check(i, i*n)) continue;
            flag = 1;
            if(i<10000) cout << i*n << " / 0" << i << " = " << n << endl;
            else cout << i*n << " / " << i << " = " << n << endl;
        }
        if(!flag) cout << "There are no solutions for " << n << '.' << endl;
    }
    return 0;
}