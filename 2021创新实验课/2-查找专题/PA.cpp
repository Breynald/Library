#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define ll long long
bool cmp(ll a , ll b){return a<b;}
ll n, k, a[100005];

ll judge(ll mid)
{
    ll sum=0, temp;
    for(int i=0; i<n; i++)
    {
        temp = a[i]-(mid-1);
        sum += a+i - lower_bound(a, a+n, temp);
    }
    if(sum >= k) return 0;
    else return 1;
}

int main()
{
    //ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    while(~scanf("%lld", &n))
    {
        for(int i=0; i<n; i++) scanf("%lld", a+i);
        sort(a, a+n, cmp);
        k = n*(n-1)/2;
        if(k%2==0) k = k/2;
        else k = k/2+1;
        ll l=0, r=a[n-1]-a[0];
        while(r-l>1)
        {
            ll mid = (r+l)/2;
            if(judge(mid)) l = mid;
            else r = mid;
        }
        cout << l << endl;
    }
    return 0;
}