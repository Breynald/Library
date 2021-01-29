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
struct p
{
    int a;
    int b;
}zu[200005], p[3];
bool cmp(struct p aa, struct p bb)
{
    if(aa.a<bb.a)
        return 1;
    else if(aa.a==bb.a)
    {
        if(aa.b<bb.b)
            return 1;
    }
    return 0;
}
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k, c=0;
        cin >> a >> b >> k ;
        f0(i, k)
            cin >> zu[i].a;
        f0(i, k)
            cin >> zu[i].b;
        sort(zu, zu+k, cmp);
        for(int i=0; i<k; i++)
        {
            for(int j=i+1; j<k; j++)
            {
                if(zu[i].a!=zu[j].a && zu[i].b!=zu[j].b)
                    c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}