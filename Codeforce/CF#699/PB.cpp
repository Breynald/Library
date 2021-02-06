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
    //FRE;
    int t; cin >> t;
    while(t--)
    {
        int a[105];
        int n, k, m=0, sum=0, flag=1;
        cin >> n >> k;
        f(n)
        {
            cin >> a[i];
            if(a[i] > m)
                m = a[i];
        }
        f(n)
        {
            sum += m - a[i];
        }
        if(sum < k)
        {cout << -1 << endl; flag=0;}
        for(int i=0; i<k-1 && flag; i++)
        {
            int j;
            for(j=0; j<n-1; j++)
            {
                if(a[j] < a[j+1])
                {
                    a[j]++;
                    break;
                }
            }
            if(j == n-1)
            {cout << -1 << endl;flag=0;}
        }
        if(flag)
        {
            int j;
            for(j=0; j<n-1; j++)
            {
                if(a[j] < a[j+1])
                {
                    cout << j+1 << endl;
                    break;
                }
            }
            if(j == n-1)
                cout << -1 << endl;
        }
        //cout << "---" << endl;
    }
    return 0;
}