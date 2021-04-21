/*
*        │\___╭╭╭╭╭╭___/│
*        │              │
*        │  ＞        ● │
*        │ ≡   ╰┬┬┬╯  ≡ │
*        │      ╰—╯     │
*        ╰——┬Ｏ————Ｏ┬——╯
*/
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
#define SpeedForce ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FRE freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout)
#define Accepted 0
#define MAXN 105
#define MAXM 10005
#define INF 1000000000
const int N = 2e5+7;
int n, m;
int father[MAXN];
int max_ = INT_MAX;
int min_ = INT_MIN;

struct Edge
{
    int x, y, w;
    bool operator <(const Edge &a) const{
        return w < a.w;
    }
}edge[MAXM];

int find(int x)
{
    if(father[x] == x) return x;
    int t = find(father[x]);
    father[x] = t;
    return t;
}

int main()
{
    SpeedForce;
    cin >> n >> m;
    f(m) cin >> edge[i].x >> edge[i].y >> edge[i].w;
    sort(edge, edge+m);
    f(m-n+1){
        int temp = -1, sum = 0;
        for(int j=1; j<=n; j++) father[j] = j;
        for(int j=i; j<m; j++)
        {
            int xx = find(edge[j].x), yy = find(edge[j].y);
            if(xx != yy)
            {
                sum ++;
                father[xx] = yy;
                if(sum == n - 1)
                {
                    temp = edge[j].w - edge[i].w;
                    break;
                }
            }
        }
        if(temp!=-1 && temp>min_) min_ = temp;
        if(temp!=-1  && temp<max_) max_ = temp;
    }
    if(max_ < INF) cout << min_  << ' '<< max_ << endl;
    else printf("-1\n");
    return 0;
}