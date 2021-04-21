/*
*        │\___╭╭╭╭╭╭___/│
*        │              │
*        │  ＞        ● │
*        │ ≡   ╰┬┬┬╯  ≡ │
*        │      ╰—╯     │
*        ╰——┬Ｏ————Ｏ┬——╯
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vd vector<double>
#define vvd vector<vector<double>>
#define pb push_back
#define f(n) for(int i=0; i<n; i++)
#define SpeedForce ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FRE freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout)
#define Accepted 0
const int N = 2e5+7;
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
    
    cin >> x >> k;
    if(x >= k){
        cout << x-k << endl;
        return 0;
    }
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
    return 0;
}