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
        ll n, k, ct=0;
        cin >> n >> k;
        ll p[n], sum[n];
        f(n)
        {
            cin >> p[i];
            if(i == 0)
                sum[i] = 0;
            else
                sum[i] = sum[i-1] + p[i-1];
        }
        for(int i=n-1; i>0; i--)
        {
            if(100*(double)p[i]/(sum[i]+ct) <= k)
                continue;
            else
            {
                ct += ceil((100*(double)p[i]/k) - sum[i] - ct);
                //100*(double)p[i]/(sum[i]+ct) <= k
            }
        }
        cout << ct << endl;
    }
    return 0;
}