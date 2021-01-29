#include <bits/stdc++.h>
using std::cout;
using std::endl;
using std::cin;
int book[50], min = INT_MAX;
int begin, end, n_city, n_road, count;
int map[51][51];

void dfs(int city, int step)
{
    if(city==end)
    {
        if(step < min)
            min = step;
        count++;
    }
    for(int i=1; i<=n_city; i++)
    {
        if(book[i])
            continue;
        if(map[city][i]==-1)
            continue;
        book[i]=1;
        dfs(i, step+map[city][i]);
        book[i]=0;
    }
    return;
}


int main()
{
    freopen("out.txt", "w", stdout);
    //freopen("in.txt", "r", stdin);

    memset(map, -1, 50*50);
    cin >> n_city >> n_road;
    for(int i=1; i<=n_road; i++)
    {
        int a, b, len;
        cin >> a >> b >> len;
        map[a][b] = len;
        map[b][a] = len;
    }
    cin >> begin >> end;
    dfs(begin, 0);
    cout << min << ' ' << count << endl;
    return 0;
}