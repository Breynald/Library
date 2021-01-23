#include <bits/stdc++.h>
using namespace std;
struct note
{
    int x;
    int y;
    int s;
};
int book[5][5];
int main()
{
    int min = INT_MAX;
    int map[5][5]= {0, 0, 1, 0, 0,
                    0, 0, 0, 0, 0,
                    0, 0, 0, 1, 0,
                    0, 1, 0, 0, 0,
                    0, 0, 0, 0, 2};
    int NEXT[4][2] = {{0, -1}, {1, 0}, {-1, 0}, {0, 1}};
    struct note a[2000];
    int head, tail;
    head = tail = 0;
    a[tail].x = a[tail].y = a[tail].s = 0;
    tail++;
    book[0][0] = 1;
    while(head<tail)
    {
        for(int i=0; i<4; i++)
        {
            if(a[head].x+NEXT[i][0]<0 || a[head].x+NEXT[i][0]>4 || a[head].y+NEXT[i][1]<0 || a[head].x+NEXT[i][1]>4)
                continue;
            if(map[a[head].x+NEXT[i][0]][a[head].y+NEXT[i][1]]==2)
            {
                if(a[head].s+1<min)
                    min = a[head].s+1;
                continue;
            }
            if(map[a[head].x+NEXT[i][0]][a[head].y+NEXT[i][1]]==1)
                continue;
            if(book[a[head].x+NEXT[i][0]][a[head].y+NEXT[i][1]])
                continue;
            a[tail].x = a[head].x + NEXT[i][0];
            a[tail].y = a[head].y + NEXT[i][1];
            a[tail].s = a[head].s + 1;
            tail++;
        }
        head++;
    }
    cout << min;
    return 0;
}