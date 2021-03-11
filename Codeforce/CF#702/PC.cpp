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
vll b;
void solve()
{
    ll x, flag=0;
    cin >> x;
    for(ll i=1; i*i*i<=x; i++){
        if(binary_search(b.begin(), b.end(), x-i*i*i)){
            flag=1;
            break;
        }
    }
    if(flag)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return;
}


int main()
{
    SpeedForce;
    #ifdef ONLINE_JUDGE
    #else
        FRE;
    #endif
    for(int i=1; i<=10000; i++){
        b.pb(pow(i, 3));
    }
    int t; cin >> t;
    while(t--) solve();
    return Accepted;
}