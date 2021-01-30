#include <bits/stdc++.h>
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
#define FIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FRE freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout)
ll ct;
struct fuck
{
    int n;
    int m;

    bool operator == (const fuck &e){
        return (this->n == e.n) && (this->m == e.m);
    }
};
vector<ll> ss;
vector<struct fuck> s;
ll A(int n, int m)
{
    struct fuck tt;
    tt.n = n;
    tt.m = m;
    vector<struct fuck>::iterator it;
    it = find(s.begin(), s.end(), tt);
    if(it != s.end())
        return ss[distance(s.begin(), it)];
    if(m == 0)
    {
        if(n==0){s.push_back(tt);ss.push_back(1);ct++; return 1;}
        if(n==1){s.push_back(tt);ss.push_back(2);ct++; return 2;}
        if(n>=2){s.push_back(tt);ss.push_back(n+2);ct++; return n+2;}
    }
    if(n==0){s.push_back(tt);ss.push_back(1);ct++; return 1;}
    ll temp = A(A(n-1, m), m-1);
    s.push_back(tt);
    ss.push_back(temp);
    ct++;
    return temp;
}

int main()
{
    FIO;
    int t;
    cin >> t;
    while(t--)
    {
        
        int n, m;
        cin >> n >> m;
        cout << A(n, m)%998244353 << endl;
    }
    //for(int i=0; i<ct; i++)
      //  cout << s[i].n << ' ' << s[i].m << ' ' << ss[i] <<endl;
    return 0;
}