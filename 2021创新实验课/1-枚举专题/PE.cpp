#include <iostream>
#include <math.h>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
#define ll long long
ll n, sum=0;
ll a[25], book[25];
ll ans[25];
void dsf(int step)
{
    if(step > n)
    {
        ll tsum=0;
        for(int i=1; i<=n; i++)
        {
            if(book[i]) tsum += a[i];
        }
        if(tsum <= sum/2) return;
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(book[i])
                {
                    if(tsum - a[i] <= sum/2)
                        ans[i]++;
                }
            }
        }
        return;
    }
    for(int i=0; i<=1; i++)
    {
        book[step] = i;
        dsf(step+1);
        book[step] = 0;
    }
    return;
}


void solve()
{
    cin >> n;
    sum=0;
    memset(ans, 0, sizeof(ans));
    memset(book, 0, sizeof(book));
    for(int i=1; i<=n; i++){
        cin >> a[i];
        sum += a[i];
    }
    dsf(1);
    for(int i=1; i<n; i++) cout << ans[i] << ' ';
    cout << ans[n];
    cout << endl;
}


int main()
{
    int t;cin >> t;
    while(t--) solve();
    return 0;
}