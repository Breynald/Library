#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define ll long long

struct note{
    ll s;
    ll e;
};

bool cmp(note a, note b){return a.e < b.e;}

int main()
{
    while(1)
    {
        ll n, ans=1;
        cin >> n;
        note a[105];
        if(n == 0) break;
        for(int i=0; i<n; i++) cin >> a[i].s >> a[i].e;
        sort(a, a+n, cmp);
        ll x=a[0].e;
        for(int i=1; i<n; i++){
            if(a[i].s >= x){ ans++; x=a[i].e;}
        }
        cout << ans << endl;
    }
    return 0;
}