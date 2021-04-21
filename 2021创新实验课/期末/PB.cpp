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

ll n, c, res;
ll a[N];
ll ans[N];
int main()
{
    SpeedForce;
    int temp = 0;
    cin >> n >> c;
    f(n) cin >> a[i];
    sort(a, a+n);
    //f(n) cout << a[i];
    ans[0] = 0;
    for(int i=1; i<n; i++)
    {
        int now = a[i];
        if(now == a[i-1]){
            ans[i] = ans[i-1];
            res += ans[i-1];
            continue;
        }
        for(int j=temp; j<i; j++){
            if(now-a[j] > c) temp++;
            if(now-a[j] == c){ans[i]++; temp++;}
            if(now-a[j] < c) break;
        }
        res += ans[i];
    }
    cout << res << endl;
    return Accepted;
}