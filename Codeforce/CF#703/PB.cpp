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

ll x[1005], y[1005];
void solve()
{
    ll n, ans=1;
    cin >> n;
    f(n) cin >> x[i] >> y[i];
    sort(x, x+n);
    sort(y, y+n);
    if(n%2==0){
        ans *= x[n/2] - x[n/2-1] + 1;
        ans *= y[n/2] - y[n/2-1] + 1;
    }
    cout << ans << endl;
    return;
}


int main()
{
    SpeedForce;
    //FRE;
    int t;cin >> t;
    while(t--) solve();
    return Accepted;
}