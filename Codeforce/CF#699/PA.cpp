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
    //FRE;
    int t;
    cin >> t;
    while(t--)
    {
        int px, py, x=0, y=0, flag1=0, flag2=0;
        string ss;
        cin >> px >> py;
        cin >> ss;
        for(int i=0; i<ss.length(); i++)
        {
            if(ss[i] == 'U')
            {
                if(py > 0)
                    y += 1;
            }
            else if(ss[i] == 'D')
            {
                if(py < 0)
                    y -= 1;
            }
            else if(ss[i] == 'R')
            {
                if(px > 0)
                    x += 1;
            }
            else if(ss[i] == 'L')
            {
                if(px < 0)
                    x -= 1;
            }
            if(y == py)
                flag2=1;
            if(x == px)
                flag1=1;
            if(flag1 && flag2)
                break;
        }
        if(flag1 && flag2)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}