#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

bool cmp(ll a, ll b) {return a<b;}

int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll a[1005], ans=0;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n, cmp);
        while(n>=4){
            ans += min(a[0]+2*a[1]+a[n-1], 2*a[0]+a[n-1]+a[n-2]);
            n -= 2;
        }
        if(n==3){
            ans += a[2]+a[0]+a[1];
        }
        if(n==2){
            ans += a[1];
        }
        if(n==1){
            ans += a[0];
        }
        cout << ans << endl;
    }
    return 0;
}