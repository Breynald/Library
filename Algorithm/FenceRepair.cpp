#include <iostream>
#include <queue>
#include <cstdio>
#include <algorithm>
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


int main()
{
    ll n, ans=0;
    priority_queue<ll, vll, greater<ll>> q;
    cin >> n;
    f(n){
        ll m;
        cin >> m;
        q.push(m);
    }
    while(q.size() > 1){
        ll m1 = q.top();
        q.pop();
        ll m2 = q.top();
        q.pop();
        ans += m1+m2;
        q.push(m1+m2);
    }
    cout << ans << endl;

    return 0;
}