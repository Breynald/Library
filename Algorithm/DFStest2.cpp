#include <bits/stdc++.h>
using namespace std;
#define FRE freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout)
int a[1005][1005];
int m, n;
int NEXT[8][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};

void dfs(int x, int y)
{
    a[x][y] = 0;
    for(int i=0; i<8; i++)
    {
        int tx = x + NEXT[i][0];
        int ty = y + NEXT[i][1];
        if(a[tx][ty]==1 && tx>=0 && tx<m && ty>=0 && ty<n)
        {
            dfs(tx, ty);
        }
    }
    return;
}


int main()
{
    FRE;
    int res = 0;
    cin >> m >> n;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin >> a[i][j];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]==1)
            {
                res++;
                dfs(i, j);
            }
        }
    }
    cout << res << endl;
    return 0;
}