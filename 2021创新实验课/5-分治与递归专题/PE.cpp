#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
const int maxn = 1e5+7;
long long lmin[maxn],rmin[maxn];
long long lmax[maxn],rmax[maxn];
pair<long long,long long>a[maxn];
int n;
long long sq(long long x)
{
    return x*x;
}
bool check(long long mid)
{
    int r = 1;
    for(int l=1;l<=n;l++)
    {
        if(a[l].first>0) break;
        while(r<n && sq(a[r+1].first-a[l].first)<=mid && abs(a[r+1].first)<=abs(a[l].first)) r++;
        while(abs(a[r].first)>abs(a[l].first)) r--;
        long long low = min(lmin[l-1],rmin[r+1]);
        long long high = max(lmax[l-1],rmax[r+1]);
        if (sq(high-low)<=mid && sq(max(abs(low),abs(high)))+sq(max(abs(a[l].first),abs(a[r].first)))<=mid) return true;
    }
    int l = n;
    for(int r=n;r>=1;r--)
    {
        if(a[r].first<0) break;
        while(l>1 && sq(a[l-1].first-a[r].first)<=mid && abs(a[l-1].first)<=abs(a[r].first)) l--;
        while(abs(a[l].first)>abs(a[r].first)) l++;
        long long low = min(lmin[l-1],rmin[r+1]);
        long long high = max(lmax[l-1],rmax[r+1]);
        if (sq(high-low)<=mid && sq(max(abs(low),abs(high)))+sq(max(abs(a[l].first),abs(a[r].first)))<=mid) return true;
    }
    return false;
}
long long xmin,xmax,ymin,ymax;
int main()
{
    xmin=ymin=1e16,xmax=ymax=-1e16;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld%lld",&a[i].first,&a[i].second);
        xmin=min(xmin,a[i].first);
        xmax=max(xmax,a[i].first);
        ymin=min(ymin,a[i].second);
        ymax=max(ymax,a[i].second);
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        lmin[i]=min(a[i].second,lmin[i-1]);
        lmax[i]=max(a[i].second,lmax[i-1]);
    }
    for(int i=n;i>=1;i--)
    {
        rmin[i]=min(a[i].second,rmin[i+1]);
        rmax[i]=max(a[i].second,rmax[i+1]);
    }
    long long l = -1,r = min(sq(xmax-xmin),sq(ymax-ymin)),ans = r;
    while(l<=r)
    {
        long long mid = (l+r)/2;
        if(check(mid))ans = mid,r = mid-1;
        else l = mid+1;
    }
    printf("%lld\n",ans);
}