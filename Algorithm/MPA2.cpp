#include <bits/stdc++.h>
using std::cout;
using std::endl;
using std::cin;
int begin, end, n_city, n_road;
int map[51][51];
int book[50];

struct note
{
    int city;
    int step;
};


int main()
{
    int head, tail, flag = 0;
    struct note a[500];
    freopen("in.txt", "r+", stdin);
    freopen("out.txt", "w+", stdout);
    memset(map, -1, 51*51);
    
    cin >> n_city >> n_road;
    for(int i=1; i<=n_road; i++)
    {
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }
    cin >> begin >> end;
    
    head = tail = 1;
    book[begin] = 1;
    a[tail].city = begin;
    a[tail].step = 0;
    tail++;
    while(head<tail)
    {
        for(int i=1; i<=n_city; i++)
        {
            if(book[i])
                continue;
            if(map[a[head].city][i]==-1)
                continue;
            book[i]=1;
            a[tail].city=i;
            a[tail].step = a[head].step + 1;
            if(a[tail].city == end)
            {
                flag=1;
                break;
            }
            tail++;
        }
        if(flag)
            break;
        head++;
    }
    cout << a[tail].step << endl;
    return 0;
}