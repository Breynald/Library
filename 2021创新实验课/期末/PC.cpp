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
const int N = 2e5+7;

int n, m;
int xx[N], yy[N];
char x[N], y[N];

int main()
{
    //SpeedForce;
    //cout << 1;
    cin >> n >> m;
    //cout << n << m;
    while(getchar()!='\n');
    f(n) scanf("%1c", &x[i]);
    while(getchar()!='\n');
    f(m) scanf("%1c", &y[i]);
    //f(n) cout << x[i];
    int left = 0;
    f(n){
        if(x[i] == y[left]){
            xx[left] = i;
            left++;
            if(left == m) break;
        }
    }
    int right = m-1;
    for(int i=n-1; i>=0; i--){
        if(x[i] == y[right]){
            yy[right] = i;
            right--;
            if(right < 0) break;
        }
    }
    int mmax = 0;
    for(int i=0; i<m-1; i++){
        if(yy[i+1] - xx[i] > mmax)
            mmax = yy[i+1] - xx[i];
    }

    cout << mmax << endl;
    return Accepted;
}