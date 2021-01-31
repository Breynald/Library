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
int a[5000];

void prime()
{
    int book[30000];
    memset(book, 0, sizeof(book));
    int ct=0;
    for(int i=2; i<30000; i++)
    {
        if(!book[i])
        {
            a[ct] = i;
            ct++;
            for(int j=i; j<30000; j+=i)
                book[j]=1;
        }
    }
    return;
}

int main()
{
    prime();
    int t;
    cin >> t;
    while(t--)
    {
        int d, ans=1;
        cin >> d;
        for(int i=0; ;i++)
        {
            if(a[i]-1 >= d)
            {
                ans *= a[i];
                for(int j=i; ;j++)
                {
                    if(a[j]-a[i] >= d)
                    {
                        ans *= a[j];
                        break;
                    }
                }
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}