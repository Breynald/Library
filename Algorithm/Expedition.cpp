#include <iostream>
#include <queue>
#include <cstdio>
#include <algorithm>
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

struct note{
    ll a;
    ll b;
}a[10005];

bool cmp(note a, note b){
    return a.a < b.a;
}

int main()
{
    ll n, l, p, ct=0, ans=0, flag=1;
    ll c[10005], d[10005];
    cin >> n;
    f(n){
        cin >> c[i];
        cin >> d[i];
    }
    cin >> l >> p;
    for(ll i=n-1, j=0; i>=0; i--,j++){
        a[j].a = l - c[i];
        a[j].b = d[i];
    }
    sort(a, a+n, cmp);
    priority_queue<int> que;
    
    f(n){
        if(p >= a[i].a){
            que.push(a[i].b);

        }else{
            while(p < a[i].a){
                if(!que.empty()){
                    p += que.top();
                    que.pop();
                    ans++;
                }else{
                    break;
                }
            }
            if(p >= a[i].a){
                que.push(a[i].b);
            }else{
                break;
            }
        }
    }
    
    if(p >= l){
        cout << ans << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}