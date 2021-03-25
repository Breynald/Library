#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#define SpeedForce ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main()
{
    SpeedForce;
    ll n, s;
    ll sum =0;
    cin >> n >> s;
    ll last=INT_MAX;
    for(ll i=0; i<n; i++)
    {
        ll m, v;
        cin >> m >> v;
        if(i==0) last=m;
        else last = min(last+s, m);
        sum += last*v;
    }
    cout << sum << endl;
    return 0;

}