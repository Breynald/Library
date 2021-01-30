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
    int t;
    cin >> t;
    while(t--)
    {
        ll num, flag=0;
        cin >> num;
        for(int i=2; i<=15 && flag==0; i++)
        {
            if(num%(ll)(pow(2, i)-1)==0)
                flag = 1;
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}