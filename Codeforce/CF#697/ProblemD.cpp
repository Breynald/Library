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
int a[1005], book[1005], n, k, Max, Count, sum;

void dfs(int step)
{
    int i;
    if(step==k+1)
    {
        if(sum > Max)
        {
            Max = sum;
            Count=1;
        }
        if(sum == Max)
        {
            Count++;
        }
        return;
    }
    for(i=1; i<=n; i++)
    {
        if(!book[i])
        {
            sum += a[i];
            book[i] = 1;
            dfs(step+1);
            book[i] = 0;
            sum -= a[i];
        }
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        sum=0;
        Max=0;
        Count=0;
        memset(book, 0, sizeof(book));
        cin >> n >> k;
        f1(i, n)
            cin >> a[i];
        dfs(1);
        cout << Count << endl;
    }
}