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
    ll n, k, q, a[100005], b[100005];
    cin >> n >> q >> k;
    memset(b, 0, sizeof(b));
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=2; i<n; i++) b[i] = b[i-1] + a[i+1] - a[i-1] - 2;
    while(q--){
        ll l, r, ans=0;
        cin >> l >> r;
        if(l == r){
            cout << k-1 << endl;
        }else{
            ans += b[r-1] - b[l];
            ans += a[l+1] - 2 + k - a[r-1] - 1;
            cout << ans << endl;
        }
    }
    return;
}


int main()
{
    SpeedForce;
    #ifdef ONLINE_JUDGE
    #else
        FRE;
    #endif
    /*9int t; cin >> t;
    while(t--) */solve();
    return Accepted;
}