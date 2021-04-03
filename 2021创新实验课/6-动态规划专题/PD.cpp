#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
const int maxn = 6002;
struct maxVal{
    int x,y;
    //x代表自己不出席时最大值
    //y代表自己出席时的最大值
}dp[maxn];
vector<int> G[maxn];//邻接表存树
bool isroot[maxn];//判断根节点
maxVal dfs(int v){
    if(G[v].empty()){
        return dp[v];
    }
    for(int i = 0; i < G[v].size(); i++){
        maxVal val = dfs(G[v][i]);
        dp[v].x += max(val.x,val.y);//v不出席，儿子可以出席可以不出席，加上儿子的值最大的
        dp[v].y += val.x;//v出席，儿子只能不出席
    }
    return dp[v];
}
int main(){
    int n,root;
    while(scanf("%d",&n) != EOF){
        for(int i = 1; i <= n; i++){
            scanf("%d",&dp[i].y);
            dp[i].x = 0;
            isroot[i] = true;
            G[i].clear();
        }
        int l,k;
        while(scanf("%d%d",&l,&k) && l){
            G[k].push_back(l);
            isroot[l] = false;
        }
        //找根
        for(int i = 1; i <= n; i++){
            if(isroot[i]){
                root = i;
                break;
            }
        }
        maxVal ans = dfs(root);
        printf("%d\n",max(ans.x,ans.y));
    }
    return 0;
}