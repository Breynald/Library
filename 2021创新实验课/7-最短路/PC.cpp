#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
const int MAXN = 30010;
const int MAXE = 150010;
const int INF = 0x3f3f3f3f;
int first[MAXN];
int vis[MAXN];
 
int Q[MAXN];
int dis[MAXN];
struct Edge{
    int to;
    int v;
    int next;
}edge[MAXE];
int tol;
void add(int a,int b,int v){
    edge[tol].to = b;
    edge[tol].v = v;
    edge[tol].next = first[a];
    first[a] = tol;
 
    tol++;
}
void spfa(int start,int n){
    int top = -1;
    memset(dis,INF,sizeof(dis));
    memset(vis,0,sizeof(vis));
    dis[start] = 0;
    vis[start] = 1;
    Q[++top] = start;
    while(top > -1){
        int u = Q[top--];
        vis[u] = 0;
        int i;
        for(i = first[u]; i != -1; i = edge[i].next){
            int v = edge[i].to;
            if(dis[v] > dis[u] + edge[i].v){
                dis[v] = dis[u] + edge[i].v;
                if(!vis[v]){
                    vis[v] = 1;
                    Q[++top] = v;
                }
            }
        }
    }
}
int main(){
    int n;
    int M;
    int a,b,c;
    scanf("%d%d",&n,&M);
        tol = 0;
        memset(first,-1,sizeof(first));
        while(M--){
            scanf("%d%d%d",&a,&b,&c);
            add(a,b,c);
        }
        spfa(1,n);
        cout << dis[n] << endl;
    
    return 0;
}