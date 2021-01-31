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

int n;
struct chain
{
    ll vertices;
    ll f;
    ll l;
}a[100005];
int book[100005];
ll MAX=-1, sum;

void dfs(int s)
{
    book[s] = 1;
    if(a[s+1].f != a[s+1].l && s<n-1)
    {
        sum += 2;
        dfs(s+1);
    }
    else
        sum += a[s].vertices - 1;
    return;
}

int main()
{
    FIO;
    FRE;
    int t;
    cin >> t;
    while(t--)
    {
        MAX = -1;sum = 0;
        int start = 0;
        memset(book, 0, sizeof(book));
        cin >> n;
        {
        f(n)
            cin >> a[i].vertices;
        f(n)
            cin >> a[i].f;
        f(n)
            cin >> a[i].l;
        }
        for(int i=1; i<n; i++)
        {
            
        }
        
        

        cout << MAX << endl;
    }
    return 0;
}