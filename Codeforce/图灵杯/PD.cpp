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
        ll n, k;
        cin >> n >> k;
        if(n == 1)
            cout << "ma la se mi no.1!" << endl;
        else if(k >= n-1)
            cout << "yo xi no forever!" << endl;
        else
        {
            if((n-1)%(k+1)==0 || (n-1)%(k+1)>k)
                cout << "ma la se mi no.1!" << endl;
            else
               cout << "yo xi no forever!" << endl;
        }
    }

    return 0;
}
