#include <iostream>
#include <algorithm>
#include <string.h>
#include <queue>
#define ll long long
using namespace std;

int next_[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};

struct p
{
    ll x;
    ll y;
    ll step;
};
int map[1005][1005];
queue <p> a;
int main()
{
    int n;
    while(cin >> n){
        while(!a.empty())a.pop();
        int flag=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                char t;
                scanf("%1c", &t);
                while(t == '\n'){
                    scanf("%1c", &t);
                }
                if(t == '.'){
                    map[i][j] = 0;
                }else if(t == '#'){
                    map[i][j] = 1;
                }else if(t == 'E'){
                    map[i][j] = 3;
                }else{
                    map[i][j] = 1;
                    p tt;
                    tt.x = i;
                    tt.y = j;
                    tt.step = 0;
                    a.push(tt);
                }
            }
        }
        while(!a.empty()){
            ll x = a.front().x;
            ll y = a.front().y;
            ll s = a.front().step;
            if(map[x][y] == 3){
                cout << s << endl;
                flag=1;
                break;
            }
            map[x][y]=1;
            for(int i=0; i<4; i++){
                ll nx = x+next_[i][0];
                ll ny = y+next_[i][1];
                if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                if(map[nx][ny]==1) continue;
                p tt;
                tt.x = nx;
                tt.y = ny;
                tt.step = s+1;
                a.push(tt);
            }
            a.pop();
        }
        if(!flag) cout << -1 << endl;
    }
    return 0;
}