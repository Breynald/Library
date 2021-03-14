#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int k=1, i=1;
vector <ll> a;

ll fuck(ll a)
{
    ll b=0;
    while(a != 0){
        ll t = a % 10;
        b += t*t;
        a /= 10;
    }
    return b;
}

void solve()
{
    int q; cin >> q;
    if(k <= q){
        for(; k<=q; i++){
            ll flag=1, ti=i;
            vector <ll> temp;
            while(1){
                if(find(temp.begin(), temp.end(), ti) != temp.end()) {flag=0;break;}
                temp.push_back(ti);
                ti = fuck(ti);
                if(ti == 1) break;
            }
            if(flag) {a.push_back(i);k++;}
        }
        i++;
    }
    for(int i=1; i<=q; i++)
    cout << i << ' ' << a[i-1] << endl;
}


int main()
{
    /*int t; cin >> t;
    while(t--)
    */
    freopen("out.out", "w+", stdout);
       solve();
    return 0;
}