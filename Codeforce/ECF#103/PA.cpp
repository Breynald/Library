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

int main()
{
    FIO;
    FRE;
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k, tk;
        cin >> n >> k;
        tk = k;
        if(n == k) cout << 1 << endl;
        else if(n > k)
        {
            while(n > k) k += tk;
            if(k == n) cout << 1 << endl;
            else cout << 2 << endl;
        }
        else
        {
            if(k % n == 0)
                cout << k / n << endl;
            else
                cout << (k/n)+1 << endl;
        }
    }
    return 0;
}