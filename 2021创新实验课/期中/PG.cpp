#include <iostream>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <algorithm>
using namespace std;

struct node
{
    int x[2],y[2],step;
    int b[2],h[2];
}s;

char map[25][25];
bool vis[25][25][25][25];
int sx[2],sy[2],n,m;
int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};

int bfs()
{
    queue<node> q;
    node pre,next;
    s.x[0]=sx[0],s.y[0]=sy[0];
    s.x[1]=sx[1],s.y[1]=sy[1];
    s.step=0;
    s.b[0]=s.b[1]=s.h[0]=s.h[1]=0;
    q.push(s);
    memset(vis,false,sizeof(vis));
    while(!q.empty())
    {
        pre=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            next=pre;
            for(int j=0; j<2; j++)
            {
                if(next.b[j]) continue;
                next.x[j]+=dir[i][0];
                next.y[j]+=dir[i][1];
                if(map[next.x[j]][next.y[j]]=='*')
                {
                    next.x[j]-=dir[i][0];
                    next.y[j]-=dir[i][1];
                }
            }
            if(vis[next.x[0]][next.y[0]][next.x[1]][next.y[1]]) continue;
            if(next.x[0]==next.x[1]&&next.y[0]==next.y[1]&&next.b[0]+next.b[1]==0) continue;
            next.step++;
            vis[next.x[0]][next.y[0]][next.x[1]][next.y[1]]=true;
            int flag=1;
            for(int j=0; j<2; j++)
            {
                int k=map[next.x[j]][next.y[j]];
                if(k<2&&!next.h[k])
                {
                    next.h[k]=1;
                    next.b[j]=1;
                }
                if(!next.b[j])
                    flag=0;
            }
            if(flag) return next.step;
            q.push(next);
        }
    }
    return -1;
}
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        int cnt=0,len=0;
        for(int i =0; i<n; i++)
        {
            scanf("%s",map[i]);
            for(int j=0; j<m; j++)
            {
                if(map[i][j]=='H') map[i][j]=cnt++;
                else if(map[i][j]=='B')
                {
                    sx[len]=i,sy[len]=j;
                    len++;
                }
            }
        }
        int ans=bfs();
        if(ans!=-1) printf("%d\n",ans);
        else printf("Sorry , sir , my poor program fails to get an answer.\n");
    }
    return 0;
}