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
    FIO;
    //FRE;
    int t;
    cin >> t;
    while(t--)
    {
        ll a;
        cin >> a;
        bool flag=false;
        if(a%2==1)
            flag=true;
        while(!flag && a>2)
        {
            if(a%2==0)
                a/=2;
            else
            {
                flag=true;
                break;
            }
            
        }


        if(flag)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}