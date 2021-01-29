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
#define f0(i, n) for(int i=0; i<n; i++)
#define f1(i, n) for(int i=1; i<=n; i++)

#define FIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FRE freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout)

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        int count = a / 2020;
        int yi = a % 2020;
        if(yi>count)
            cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}