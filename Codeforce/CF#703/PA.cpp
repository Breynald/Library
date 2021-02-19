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

void solve()
{
    int n, flag=1;
    cin >> n;
    ll a[n], sum=0;
    a[0] = 0;
    cin >> sum;
    for(int i=1; i<n; i++){
        if(sum < 0){
            flag = 0;
        }
        cin >> a[i];
        if(a[i] > a[i-1]){
            sum += a[i]-a[i-1]-1;
            a[i] = a[i-1] + 1;
        }else{
            sum += a[i]-a[i-1]-1;
            a[i] = a[i-1] + 1;
        }
    }
    if(sum < 0){
        flag = 0;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return;
}


int main()
{
    IOS;
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
