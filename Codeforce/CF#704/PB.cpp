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
ll book[100005];
ll index_[100005];
ll a[100005];
void solve()
{
    ll n, r;
    cin >> n;
    r = n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        index_[a[i]] = i;
        book[i] = 1;
    }
    for(int i=n; i>=1; i--){
        if(!book[i]) continue;
        for(int j=index_[i]; j<=r; j++){
            cout << a[j] << ' ';
            book[a[j]] = 0;
        }
        r = index_[i]-1;
    }
    cout << endl;
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