#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(false);cin.tie(0)
int a[1000000], b, n, m;

int BS(int x)
{
    int left=0, right=n-1;
    while(left<=right)
    {
        int i = (left + right) / 2;
        if(a[i]==x) return i;
        else if(a[i]>x) right = i-1;
        else left = i+1;
    }
    return -1;
}

int main()
{
    IO;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> a[i];
    int bb, tt;
    for(int i=0; i<m; i++)
    {
        cin >> b;
        if(i)
        {
            if(b==bb)
            {
                cout << tt << ' ';
                continue;
            }
        }
        int t = BS(b);
        if(t==-1)
            cout << -1 << ' ';
        else
        {
            if(t != 0)
            {
                while(a[t-1]==a[t])
                    t--;
            }
            cout << t+1 << ' ';
        }
        tt = t + 1;
        bb = b;
    }    
    return 0;
}