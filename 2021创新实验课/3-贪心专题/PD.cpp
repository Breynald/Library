#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll a[50005];
bool cmp(ll a, ll b)
{
    return a>b;
}

int main()
{
    ll n, sum=0, max_=0;
    cin >> n;
    for(int i=0; i<n; i++){ cin >> a[i]; sum += a[i];}
    sort(a, a+n, cmp);
    for(int i=0; i<n-1; i++)
    {
        for(int j=a[i]; j>1; j--)
        {
            if(a[i]%j!=0) continue;
            else
            {
                if(a[i]+a[n-1]-a[i]/j-a[n-1]*j > max_)
                    max_ = a[i]+a[n-1]-a[i]/j-a[n-1]*j;
            }
        }
    }
    cout << sum-max_ << endl;
    return 0;
}


