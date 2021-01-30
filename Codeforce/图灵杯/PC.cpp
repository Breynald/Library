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
#define FIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FRE freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout)

ll sum(int n)
{
    if(n == 1) return 1;
    return n + sum(n-1);
}

int main()
{
    ll S=0;
    int n, ct=1;
    cin >> n;
    int a[n];
    cin >> a[0];
    for(int i=1; i<n; i++)
    {
        cin >> a[i];
        if(a[i] >= a[i-1])
        {
            ct++;
        }
        else
        {
            S += sum(ct);
            ct = 1;
        }
    }
    S += sum(ct);
    cout << S << endl;
    return 0;
}