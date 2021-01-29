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
int d;
int judge(int n)
{
    while(n)
    {
        int t = n % 10;
        if(t == d)
            return 1;
        else
            n /= 10;
    }
    return 0;
}


int main()
{
    FIO;
    //FRE;
    int t;
    cin >> t;
    while(t--)
    {
        int q;
        cin >> q >> d;
        while(q--)
        {
            if(d == 1)
            {
                
                int tt;
                cin >> tt;
                cout << "YES" << endl;
            
            }
            else if(d == 2)
            {
                int tt;
                cin >> tt;
                if(tt % 2 == 0)
                    cout << "YES" << endl;
                else
                {
                    if(tt < 20)
                        cout << "NO" << endl;
                    else
                        cout << "YES" << endl;
                }
            }
            else
            {
                int tt, flag = 0;
                cin >> tt;
                if(tt >= d*10)
                    flag=1;
                if(tt % d == 0)
                    flag=1;
                while(tt>d && !flag)
                {
                    if(judge(tt)){flag=1;break;}
                    else{
                        tt -= d;
                    }
                }
                if(flag)
                    printf("YES\n");
                else printf("NO\n");
            }
        }
    }
    

    return 0;
}