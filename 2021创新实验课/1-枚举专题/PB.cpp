#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve()
{
    ll a, b, sa, sb;
    sa = sb = 0;
    cin >> a >> b;
    for(int i=1; i<a; i++){
        if(i*(a/i) == a){
            sa += i;
        }
    }
    for(int i=1; i<b; i++){
        if(i*(b/i) == b){
            sb += i;
        }
    }
    if(sa==b && sb==a) cout << "YES" << endl;
    else cout << "NO" << endl; 
}


int main()
{
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}