#include<cmath>
#include<cstdio>
#include<vector>
#include<algorithm>
#define N 1100000
using namespace std;
inline char gc(){
    static char now[1<<16],*S,*T;
    if (T==S){T=(S=now)+fread(now,1,1<<16,stdin);if (T==S) return EOF;}
    return *S++;
}
inline int read(){
    int x=0,f=1;char ch=gc();
    while(ch<'0'||ch>'9') {if (ch=='-') f=-1;ch=gc();}
    while(ch<='9'&&ch>='0') x=x*10+ch-'0',ch=gc();
    return x*f;
}
struct node{
    int x,y,id;
}p[N];
inline bool cmp(const node &a,const node &b){
    return a.x<b.x;
}
inline bool cmp1(const node &a,const node &b){
    return a.y<b.y;
}
int n,nn;
vector<node> a[1100];
int main(){
//  freopen("cf576c.in","r",stdin);
    n=read();nn=1000;int mx=0;
    for (int i=1;i<=n;++i) p[i].x=read(),p[i].y=read(),p[i].id=i,mx=max(mx,p[i].x);
    sort(p+1,p+n+1,cmp);
    for (int i=1;i<=n;++i) a[(p[i].x-1)/1000+1].push_back(p[i]);
    for (int i=1;i<=1088;++i){
        sort(a[i].begin(),a[i].end(),cmp1);
        for (int j=0;j<a[i].size();++j) printf("%d ",a[i][j].id);
    }
    return 0;
}