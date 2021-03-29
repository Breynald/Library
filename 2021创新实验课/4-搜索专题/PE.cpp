#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
#define ll long long
int n, m, lenth1=9999999, lenth2=999999;
int walk[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
int map1[1000][1000], map2[1000][1000];
struct p
{
    int x;
    int y;
    int step;
};
vector <vector<int>> a;
void dfs(int x, int y, int step)
{
    if(step>lenth1) return;
    if(x==n-1 && y==m-1){
        if(step<lenth1)
            lenth1 = step;
    }
    for(int i=0; i<4; i++){
        int nx = x+walk[i][0];
        int ny = y+walk[i][1];
        if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
        if(map1[nx][ny]) continue;
        map1[nx][ny]=1;
        dfs(nx, ny, step+1);
        map1[nx][ny]=0;
    }
}
void dfs2(int x, int y, int step)
{   if(step>lenth2) return;
    if(x==n-1 && y==m-1){
        //cout << step;
        if(step<lenth2)
            lenth2 = step;
    }
    for(int i=0; i<4; i++){
        int nx = x+walk[i][0];
        int ny = y+walk[i][1];
        if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
        if(map2[nx][ny]) continue;
        map2[nx][ny]=1;
        dfs2(nx, ny, step+1);
        map2[nx][ny]=0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char ch;
            scanf("%1c", &ch);
            while(ch == '\n'){
                scanf("%1c", &ch);
            }
            if(ch == '.'){
                map1[i][j] = 0;
            }else{
                map1[i][j] = 1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char ch;
            scanf("%1c", &ch);
            while(ch == '\n' || ch == ' '){
                scanf("%1c", &ch);
            }
            if(ch == '.'){
                map2[i][j] = 0;
            }else{
                map2[i][j] = 1;
            }
            if(map1[i][j]==map2[i][j] && map1[i][j]==0){
                map2[i][j] = 0;
            }else map2[i][j] = 1;
        }
    }
    map1[0][0] = map2[0][0] = 1;
    
    dfs(0, 0, 0);
    dfs2(0, 0, 0);
    /*for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cout << map2[i][j];
        cout << endl;
    }*/
    //cout << lenth1 << lenth2 << endl;
    if(lenth1 == lenth2)cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
