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
    int n, a[30005], c[3], ans=0;
    c[0] = c[1] = c[2] = 0;
    cin >> n;
    f(n){
        cin >> a[i];
        if(a[i]%3 == 0) c[0]++;
        else if(a[i]%3 == 1) c[1]++;
        else c[2]++;
    }
    int max_index;
    f(3){
        if(c[i] == max({c[0], c[1], c[2]}))
            max_index = i;
    }
    while(c[max_index] != n/3){
        int temp = c[max_index] - (n/3);
        ans += temp;
        c[max_index] = n/3;
        max_index++;
        if(max_index == 3) max_index = 0;
        c[max_index] += temp;
        f(3){
            if(c[i] == max({c[0], c[1], c[2]}))
                max_index = i;
        }
    }
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