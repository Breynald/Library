/*
*        │\___╭╭╭╭╭╭___/│
*        │              │
*        │  ＞        ● │
*        │ ≡   ╰┬┬┬╯  ≡ │
*        │      ╰—╯     │
*        ╰——┬Ｏ————Ｏ┬——╯
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <cstdio>
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
const int N=2e5+7;
char s[N], t[N];
ll pre[N], suf[N];

void solve()
{
    ll ans=0, n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        cin >> s[i];
    for(int i=1; i<=m; i++)
        cin >> t[i];
    for(int i=1, j=1; i<=n; i++){
        if(s[i] == t[j]){
            pre[j] = i;
            j++;
        }
        if(j > m) break;
    }
    for(int i=n, j=m; i>=1; i--){
        if(s[i] == t[j]){
            suf[j] = i;
            j--;
        }
        if(j == 0) break;
    }
    for(int i=1; i<m; i++){
        ans = max(ans, suf[i+1]-pre[i]);
    }
    cout << ans << endl;
}


int main()
{
    SpeedForce;
    /*#ifdef ONLINE_JUDGE
    #else
        FRE;
    #endif
    /*int t; cin >> t;
    while(t--)*/solve();
    return Accepted;
}