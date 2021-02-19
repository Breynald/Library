#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vd vector<double>
#define vvd vector<vector<double>>
#define pb push_back
#define f(n) for(int i=0; i<n; i++)
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FRE freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout)
ll n;
ll query(ll l, ll r)
{
    ll x;
    printf("? %lld %lld\n", l, r);
    fflush(stdout);
    scanf("%lld", &x);
    return x;
}

void answer(ll x)
{
    printf("! %lld\n", x);
    fflush(stdout);
    return;
}

void left(ll p)
{
    ll ans;
    ll l=1, r=p-1;
    while(l <= r){
        ll mid = (l+r)/2;
        if(query(mid, p) == p){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    answer(ans);
}

void right(ll p)
{
    ll ans;
    ll l=p+1, r=n;
    while(l <= r){
        ll mid = (l+r)/2;
        if(query(p, mid) == p){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    answer(ans);
}

int main()
{
    ll p;
    scanf("%lld", &n);
    p = query(1, n);
    if(p == 1) right(p);
    else if(p == n) left(p);
    else{
        if(query(1, p) == p)
            left(p);
        else right(p);
    }
    return 0;
}