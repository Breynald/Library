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

bool cmp(ll a, ll b)
{
    return a >= b;
}


int main()
{
    FIO;
    //FRE;
    int t;
    cin >> t;
    while(t--)
    {
        ll a[200005];
        int n, flag=1;
        cin >> n;
        f0(i, 2*n)
        {
            cin >> a[i];
            if(a[i] % 2 == 1)
                flag=0;
        }
        if(flag)
        {
            sort(a, a+2*n, cmp);
            /*
            for(int i=0; i<n*2; i++)
                cout << a[i] << ' ';
            cout << endl;
            */
            for(int i=0; i<n; i++)
            {
                if(a[2*i] != a[2*i+1])
                {flag=0;break;}
            }
            if(flag)
            {
                ll p = 0, b[n];
                for(int i=0; i<n && flag; i++)
                {
                    if((a[i*2]-p) % (2*(n-i)) == 0)
                    {
                        b[i] = (a[i*2]-p) / (2*(n-i));
                        p += b[i] * 2;
                    }
                    else flag = 0;
                }
                f0(i, n-1)
                {
                    if(b[i] <= b[i+1] || b[i]<=0 || b[i+1]<=0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        if(flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
