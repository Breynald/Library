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
ll n,k,ans=1;
void js(ll x)
{
	if((x-k)%2==0 && (x-k)>0)
	 {
	 	ans++;
	 	js((x-k)/2);
	 	js((x+k)/2);
	 }
}

int main()
{
    SpeedForce;
    cin >> n >> k;
    js(n);
    cout << ans;
    

    return Accepted;
}