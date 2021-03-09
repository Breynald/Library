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

void solve()
{
    ll x, y, mid, ans=0;
    cin >> x >> y;
    if(y > x) y = x-1;
    mid = (int)sqrt(x + 1);
    if(mid > y) mid = y;
    ans += mid * (mid-1) / 2;
    for(int i=mid+1; i<=y; i++){
        if(x / (i+1) == 0) break;
        ans += x / (i+1);
    }
    
        //if(x/(i+1) > i-1) ans += i-1;
        //else ans += x/(i+1);
    cout << ans << endl;
}


int main()
{
    SpeedForce;
    #ifdef ONLINE_JUDGE
    #else
        FRE;
    #endif
    int t; cin >> t;
    while(t--) solve();
    return Accepted;
}