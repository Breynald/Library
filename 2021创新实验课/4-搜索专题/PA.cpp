#include <iostream>
#include <algorithm>
#include <queue>
#include <string.h>
using namespace std;
#define ll long long
ll x, k;
ll book[1000005];
struct note
{
    ll x;
    ll step;
};
queue <note> a;
int main()
{
    
    while(cin >> x >> k){
        if(x >= k){
            cout << x-k << endl;
            continue;
        }
    while(!a.empty())a.pop();
    memset(book, 0, sizeof(book));
    note temp;
    temp.step=0;
    temp.x = x;
    book[x]=1;
    a.push(temp);
    while(1)
    {
        ll ns = a.front().step;
        ll ax = a.front().x;
        if(ax == k){
            cout << ns << endl;
            break;
        }
        note tt;
        tt.step = ns+1;
        tt.x = ax+1;
        if(tt.x>=0 && tt.x<100005 && !book[tt.x]){
            book[tt.x]++;
            a.push(tt);
        }
        tt.x = ax*2;
        if(tt.x>=0 && tt.x<100005 && !book[tt.x]){
            book[tt.x]++;
            a.push(tt);
        }
        tt.x = ax-1;
        if(tt.x>=0 && tt.x<100005 && !book[tt.x]){
            book[tt.x]++;
            a.push(tt);
        }
        a.pop();
    }
    }
    return 0;
}