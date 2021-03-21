#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
#define LL long long
struct city
{
    double x,p;
}c[50005];
bool cmp(city a,city b)
{
    return a.x<=b.x;
}
int main()
{
    int n;
    scanf("%d",&n);
    double sum=0.0;
    for(int i=0;i<n;++i)
    {
        scanf("%lf%lf",&c[i].x,&c[i].p);
        sum+=c[i].p;
    }
    double s=0.0;
    sort(c,c+n,cmp);
    for(int i=0;i<n;++i)
    {
        s+=c[i].p;
        if(s-sum/2>=1e-10) {printf("%.10lf\n",c[i].x);break;}
    }
    return 0;
}
