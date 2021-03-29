#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int n, m, flag, sx, sy;
char map[60][60], book[60][60];
int walk[4][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}};

void dfs(int x, int y, int sign)
{
    if(flag)return;
    if(sign){
        if(x==sx && y==sy){
            cout << "Yes" << endl;
            flag=1;
            return;
        }
    }
    for(int i=0; i<4; i++){
        int nx = x+walk[i][0];
        int ny = y+walk[i][1];
        if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
        if(book[nx][ny])continue;
        if(map[x][y] != map[nx][ny])continue;
        book[x][y]=1;
        if(sign==2) book[sx][sy]=0;
        //cout << nx << ny << endl;
        dfs(nx, ny, sign+1);
        book[x][y]=0;
        if(sign==2) book[sx][sy]=1;
    }
}


int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%1c", &map[i][j]);
            while(map[i][j] == '\n'){
                scanf("%1c", &map[i][j]);
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(book[i][j]) continue;
            sx = i;
            sy = j;
            dfs(i, j, 0);
            if(flag) return 0;
            book[i][j]=1;
        }
    }

    cout << "No" << endl;
    return 0;
}