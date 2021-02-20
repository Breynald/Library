#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[10001];
int b[10001];
int dp[10000001];
signed main()
{
	cin >> m >> n;
	for(int i=1;i<=n;i++)
	    cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++)
	    for(int j=a[i];j<=m;j++)
	        dp[j] = max(dp[j],dp[j-a[i]]+b[i]);
	cout << dp[m] << endl;
	return 0;
}