#include <bits/stdc++.h>
using namespace std;
#define inf 999999
int main()
{
    freopen("in.txt", "r+", stdin);
    freopen("out.txt", "w+", stdout);
    int e[10][10], book[10], dis[10], city, road, begin;
    cin >> city >> road;
    for(int i=1; i<=city; i++)
        for(int j=1; j<=city; j++)
            if(i==j) e[i][i]=0;
            else e[i][j] = inf;
    for(int i=0; i<road; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        e[a][b] = c;
    }
    memset(book, 0, sizeof(book));
    cin >> begin;
    book[begin] = 1;
    for(int i=1; i<=city; i++)
        dis[i] = e[begin][i];
    for(int i=0; i<city-1; i++)
    {
        int min = inf, pos;
        for(int j=1; j<=city; j++)
        {
            if(!book[j])
            {
                if(min > dis[j])
                {
                    min = dis[j];
                    pos = j;
                }
            }
        }
        book[pos] = 1;
        for(int j=1; j<=city; j++)
        {
            if(e[pos][j]<inf)
            {
                if(dis[j] > e[pos][j] + dis[pos])
                {
                    dis[j] = e[pos][j] + dis[pos];
                }
            }
        }
    }
    for(int i=1; i<=city; i++)
        cout << dis[i] << ' ';
    return 0;
}