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
#define FIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FRE freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout)
#define mmm 100005
int a[mmm];


int main()
{
    FIO;
    int n, ans=0, q=0, w=0;
    cin >> n;
    f(n)
        cin >> a[i];
    f(n){
        if(q!=a[i] && w!=a[i] && a[i]!=a[i+1]){
            if(q == a[i+1]){
                q = a[i];
                ans++;
            }else{
                w = a[i];
                ans++;
            }
            continue;
        }
        if(q != a[i]){
            q = a[i];
            ans++;
            continue;
        }
        if(w != a[i]){
            w = a[i];
            ans++;
            continue;
        }
    }
    cout << ans << endl;
    return 0;
}
    