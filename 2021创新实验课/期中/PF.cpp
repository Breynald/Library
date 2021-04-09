#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <set>
using namespace std;
typedef long long ll;
bool Finish_read;
template<class T>
inline void read(T &x) {
    Finish_read=0;x=0;int f=1;char ch=getchar();
    while(!isdigit(ch)){if(ch=='-')f=-1;if(ch==EOF)return;ch=getchar();}
    while(isdigit(ch))x=x*10+ch-'0',ch=getchar();
    x*=f;Finish_read=1;
}
template<class T>
inline void print(T x) {
    if(x/10!=0)
        print(x/10);
    putchar(x%10+'0');
}
template<class T>
inline void writeln(T x) {
    if(x<0)
        putchar('-');
    x=abs(x);
    print(x);
    putchar('\n');
}
template<class T>
inline void write(T x) {
    if(x<0)
        putchar('-');
    x=abs(x);
    print(x);
}
/*================Header Template==============*/
int s,t,p[100010],n;
set<int>st; 
inline bool check(int x) {
    int l=p[n]-x,r=p[n]+x;
    for(int i=n-1;i;i--)
        if(l<=p[i]&&r>=p[i]) {
            l=p[i]-x;
            r=p[i]+x;
        }
        else {
            l=max(l,p[i]-x);
            r=min(r,p[i]+x);
        }
    return (s>=l&&s<=r)||(t>=l&&t<=r);
}
int main() {
    read(n);
    read(s);
    read(t);
    for(int i=1;i<=n;i++)
        read(p[i]);
    int l=abs(s-t),r=1e9+7,ans=2e9;
    while(l<=r) {
        int mid=(l+r)>>1;
        if(check(mid)) {
            ans=min(ans,mid);
            r=mid-1;
        }
        else
            l=mid+1;
    }
    writeln(ans);
    return 0;
}