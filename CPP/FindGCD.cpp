#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define f0(n) for(int i=0; i<n; i++)
#define f1(n) for(int i=1; i<=n; i++)
#define FIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FRE freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout)
int book[32768];

int main()
{
    FIO;
    FRE;
    int t;
    cin >> t;
    while(t--)
    {   
        memset(book, 0, sizeof(book));
        int a, sum=0;
        cin >> a;
        for(int i=2; i<a; i++)
        {
            if(!book[i] && a%i==0)
            {
                sum++;
                book[i]=1;
                for(int j=i*2; j<a; j+=i)
                {
                    if(!book[j])
                    {
                        book[j]=1;
                        sum++;
                    }
                }
            }
        }
        cout << a-sum-1 << endl;
    }
    return 0;
}