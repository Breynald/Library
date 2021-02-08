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

struct master
{
    ll a;
    ll b;
};

bool cmp(master a1, master a2)
{
    return a1.a < a2.a;
}


int main()
{
    FIO;
    //FRE;
    int t;
    cin >> t;
    while(t--)
    {
        double A, B;
        ll n, flag=1;
        master round[100005];
        cin >> A >> B;
        cin >> n;
        //cout << A << ' ' << B << endl;
        f(n)
            cin >> round[i].a;
        f(n)
            cin >> round[i].b;
        sort(round, round+n, cmp);
        f(n-1)
        {
            B -= ceil(round[i].b/A)*round[i].a;
        }
        if(B <= 0) flag=0;
        f(ceil(round[n-1].b/A)-1)
            B -= round[n-1].a;
        if(B <= 0) flag=0;
        if(flag)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}