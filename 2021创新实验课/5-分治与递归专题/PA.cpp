#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 
const int pre[3]={2,0,1},nxt[3]={1,2,0};
int n,m,ans[30005][3];
bool ok(int x,int y,int t){
	int cnt=n;
	while (cnt>0)
		if (x==y) return cnt==t+1; else
		if (x>y){
			y=x-y; x-=y; cnt-=2; t=nxt[t];
		} else{
			x=y-x; y-=x; cnt--; t=pre[t];
		}
	return 0;
}
int main(){
	for (scanf("%d%d",&n,&m); n!=-1 && m!=-1; scanf("%d%d",&n,&m)){
		int i,t1=n%3,t0=pre[t1],t2=nxt[t1],cnt=0;
		for (i=1; i<m; i++) if (ok(i,m-i,t0)){
			ans[++cnt][t0]=m; ans[cnt][t1]=i; ans[cnt][t2]=m-i;
		}
		printf("%d\n",cnt);
		if (t0==1) for (i=cnt; i; i--) printf("%d %d %d\n",ans[i][0],ans[i][1],ans[i][2]);
			else for (i=1; i<=cnt; i++) printf("%d %d %d\n",ans[i][0],ans[i][1],ans[i][2]);
	}
	return 0;
}