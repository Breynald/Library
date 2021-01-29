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
#define f(i, n) for(int i=0; i<n; i++)
#define ff(i, n) for(int i=1; i<=n; i++)
#define FIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FRE freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout)

int a[10000], n, k;
int book[10000];
void dfs(int step, int sum)
{
    
    if(sum == k)
    {
        f(i, n)
            if(book[i])
                cout << a[i] << ' ';
        cout << endl;
    }
    if(step == n)
        return;
    f(i, n)
    {
        if(!book[i])
        {
            sum += a[i];
            book[i] = 1;
            dfs(step+1, sum);
            sum -= a[i];
            book[i] = 0;
        }
    }
    return;
}


int main()
{
    FRE;
    cin >> n;
    cin >> k;
    f(i, n)
        cin >> a[i];
    dfs(0, 0);
    
    return 0;
}