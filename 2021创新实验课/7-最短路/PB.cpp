#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;
#define inf 999999
int e[105][105], book[105], dis[105], city, road, start=1;
int main()
{
    //freopen("in.txt", "r+", stdin);
    //freopen("out.txt", "w+", stdout);
    while(1){
        cin >> city >> road;
        if(city == 0 && road == 0) break;
        memset(dis, 0, sizeof(dis));
        memset(book, 0, sizeof(book));
        for(int i=1; i<=city; i++)
            for(int j=1; j<=city; j++)
                if(i==j) e[i][i]=0;
                else e[i][j] = inf;
        for(int i=0; i<road; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            e[a][b] = c;
            e[b][a] = c;
        }
        book[start] = 1;
        for(int i=1; i<=city; i++)
            dis[i] = e[start][i];
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
        cout << dis[city] << endl;
    }
    return 0;
}