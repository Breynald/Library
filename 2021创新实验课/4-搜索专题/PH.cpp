#include <iostream>
#include <algorithm>
#include <queue>
#include <string.h>
#define ll long long
using namespace std;
int n, k;
char map[2005][2005];
int kk[2005][2005];
char now[5000], temp[5000];
int book[2005][2005], walk[2][2]={{0, 1}, {1, 0}};
queue<p> a;

struct p
{
    int x;
    int y;
};

void bfs()
{
    int x = a.front().x;
    int y = a.front().y;
    if(k > 0){

    }
}


int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    memset(kk, k, sizeof(k));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%1c", &map[i][j]);
            while(map[i][j] == '\n')
                scanf("%1c", &map[i][j]);
        }
    }
    p start;
    start.x = 0;
    start.y = 0;
    a.push(start);
    now[0] = 'a';
    if(map[0][0]!='a') k--;
    
    bfs();


    return 0;
}

