#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
vector <ll> a;
ll m, n, l, ans;

bool judge(ll mid)
{
    ll ct=0, now, next;
    now = next = 0;
    while(now<n+1 && next<=n+1){
        next++;
        if(a[next]-a[now] < mid){
            ct++;
            if(ct > m) return 0;
        }else{
            now = next;
        }
    }
    if(next > n+1){
        next = n+1;
        while(a[next]-a[now]<mid)
        {
            ct++;
            now--;
        }
    }
    if(ct > m) return 0;
    else return 1;
    
}


int main()
{
    cin >> l >> n >> m;
    a.push_back(0);
    for(int i=0; i<n; i++){
        ll t; cin >> t;
        a.push_back(t);
    }
    a.push_back(l);
    ll left=1, right=l;
    while(left<=right){
        ll mid = (left+right)/2;
        if(judge(mid)){
            ans = mid;
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}