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
        int n, mlx=1, count1=1, tt;
        cin >> n;
        cin >> tt;
        while(n-- != 1)
        {
            int m;
            cin >> m;
            if(m == tt)
            {
                count1++;
                if(count1 > mlx)
                    mlx = count1;
            }
            else if(m > tt)
            {
                count1 = 1;
            }
            
            tt = m;
        }
        cout << mlx << endl;
    }


    return 0;
}