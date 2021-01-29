#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt", "r+", stdin);
    freopen("out.txt", "w+", stdout);

    int e[21][21], n, r;
    for(int i=1; i<=20; i++)
        for(int j=1; j<=20; j++)
        {
            if(i==j)
                e[i][i] = 0;
            else e[i][j] = 99999;
        }
    cin >> n >> r;
    for(int i=1; i<=r; i++)
    {
        int a, b, l;
        cin >> a >> b >> l;
        e[a][b] = l;
    }
    for(int k=1; k<=n; k++)
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                if(e[i][k]<99999 && e[k][j]<99999 && i!=j && e[i][j] > e[i][k] + e[k][j])
                    e[i][j] = e[i][k] + e[k][j];
    /*for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout << e[i][j] << ' ';
        }
        cout << endl;
    }*/
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        {
            if(i!=j)
            {
                cout << i << "->" << j << ':' << e[i][j] << endl;
            }
        }
    return 0;
}