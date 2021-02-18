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
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FRE freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout)
ll n, w;
ll maxv=0, dp[10005][10005];
struct note
{
    ll w;
    ll v;
}a[10005];

ll rec(int i, int j)
{
    if(dp[i][j])
        return dp[i][j];
    ll res;
    if(i == n) res=0;
    else if(j < a[i].w) res = rec(i+1, j);
    else res = max(rec(i+1, j), rec(i+1, j-a[i].w) + a[i].v);
    return dp[i][j] = res;
}

int main()
{
    IOS;
    cin >> n >> w;
    f(n) cin >> a[i].w >> a[i].v;
    cout << rec(0, w);
    
    
    return 0;

}