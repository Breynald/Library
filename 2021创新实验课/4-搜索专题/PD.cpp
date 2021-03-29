#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#define ll long long
using namespace std;

int jump[8][2] = {{-1,-2}, {1,-2}, {-2,-1}, {2,-1}, {-2,1}, {2,1}, {-1,2}, {1,2}};
int book[30][30];
int flag;
int p, q;
struct note
{
    int x;//p
    int y;//letter q
};
vector <note> ans;
void dfs(int step)
{
    if(flag == 1) return;
    if(step == p*q){
        for(int i=0; i<p*q; i++){
            char ch = 'A'+ans[i].y;
            cout << ch;
            cout << ans[i].x+1;
        }
        cout << endl;
        flag=1;
        return;
    }
    note temp = ans.back();
    for(int i=0; i<8; i++){
        int x = temp.x + jump[i][0];
        int y = temp.y + jump[i][1];
        if(x<0 || y<0 || x>=p || y>=q) continue;
        if(book[x][y]) continue;
        note tt;
        tt.x = x;
        tt.y = y;
        //char ch = 'A'+y;
        //cout << '('<<ch<<','<<x+1<<')'<<endl;
        ans.push_back(tt);
        book[x][y]=1;
        dfs(step+1);
        book[x][y]=0;
        ans.pop_back();
    }
}

void solve()
{
    cin >> p >> q;
    flag=0;
    ans.clear();
    memset(book, 0, sizeof(book));
    book[0][0] = 1;
    note start;
    start.x = start.y = 0;
    ans.push_back(start);
    dfs(1);
    if(!flag)cout << "impossible" << endl;
}



int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, tt=1; cin >> t;
    while(t--)
    {
        cout << "Scenario #" << tt << ':' << endl;
        tt++;
        solve();
        cout << endl;
    }
    return 0;
}