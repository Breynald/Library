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
ll w, n;
ll weight[105], value[105], dp[105][10005];

ll rec(ll i, ll j)
{
	if(dp[i][j])
		return dp[i][j];
	int ans;
	if(i > n) ans = 0;
	else if(j < weight[i]) ans = rec(i+1, j);
	else ans = max(rec(i+1, j), rec(i+1, j-weight[i])+value[i]);
	return dp[i][j] = ans;
}

int main()
{
    SpeedForce;
    #ifdef ONLINE_JUDGE
    #else
        FRE;
    #endif

	cin >> w >> n;
	for(int i=1; i<=n; i++)
		cin >> weight[i] >> value[i];
	cout << rec(1, w) << endl;
    return Accepted;
}