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
ll ans;
void bsf(ll a , ll b, int step)
{
    if(step >= ans) return;
    if(a == 0){
        ans = step;
    }else{
        bsf(a/b, b, step+1);
        bsf(a, b+1, step+1);
    }
    return;
}

void solve()
{
    ll a, b;
    ans = INT_MAX;
    cin >> a >> b;
    if(a < b) cout << 1 << endl;
    else if (a == b) cout << 2 << endl;
    else{
        if(b == 1){
            bsf(a, b+1, 0);
            cout << ans+1 << endl;
        }else{
            bsf(a, b, 0);
            cout << ans << endl;
        }
    }  
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