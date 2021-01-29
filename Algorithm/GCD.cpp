#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define f0(n) for(int i=0; i<n; i++)
#define f1(n) for(int i=1; i<=n; i++)
#define FIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define Redirect freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout);

int gcd(int a, int b)
{
    if(a%b==0) return b;
    else return gcd(b, a%b);
}

int main()
{
    FIO;
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        for(int i=2; ; i++)
        {
            if(gcd(a, b*i) == b)
            {
                cout << b*i << endl;
                break;
            }
        }
    }
    return 0;
}