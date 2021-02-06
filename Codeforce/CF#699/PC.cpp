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

int main()
{
    FIO;
    FRE;
    int t; cin >> t;
    while(t--)
    {
        int n, m, ok = 1, cv = -1;
    cin >> n >> m;
    vector<int> a(n), b(n), c(m), d(m), e(n + 1, -1);
    vector<vector<int>> bb(n + 1);
    for(int& x : a) cin >> x;
    for(int& x : b) cin >> x;
    for(int& x : c) cin >> x;
    for(int i = 0; i < n; i += 1){
      if(a[i] != b[i]) bb[b[i]].push_back(i);
      e[b[i]] = i;
    }
    for(int i = m - 1; i >= 0; i -= 1){
      if(bb[c[i]].empty()){
        if(cv == -1){
          if(e[c[i]] == -1){
            ok = 0;
            break;
          }
          cv = e[c[i]];
        }
      }
      else{
        cv = bb[c[i]].back();
        bb[c[i]].pop_back();
        a[cv] = b[cv];
      }
      d[i] = cv;
    }
    for(int i = 0; i < n; i += 1) ok &= a[i] == b[i];
    if(ok){
      cout << "YES\n";
      for(int x : d) cout << x + 1 << " ";
      cout << "\n";
    }
    else cout << "NO\n";
    }
    return 0;
}