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
    int t;
    cin >> t;
    while(t--)
    {
        ll num, length, sum1=0, sum2=0;
        cin >> length >> num;
        while(num--)
        {
            ll temp;
            cin >> temp;
            if(length - temp > temp)
            {
                if(temp > sum1)
                    sum1 = temp;
                if(length-temp > sum2)
                    sum2 = length-temp;
            }
            else
            {
                if(temp > sum2)
                    sum2 = temp;
                if(length-temp > sum1)
                    sum1 = length-temp;
            }
        }
        cout << sum1 << ' ' << sum2 << endl;
    }
    return 0;
}