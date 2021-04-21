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
const int M=30000000;
int ans[M+10];
int n, t;

int main()
{
    //SpeedForce;
    for(int c=1 ; c<=M/2; c++)
        for(int a=c+c; a<=M; a+=c){
             int b = a - c;
             if(c == (a ^ b))
                ans[a]++;
        }
    for(int i=2; i<=M; i++)
        ans[i] += ans [i-1];
    cin >> t;
    for(int i=1 ;i<=t; i++)  
    {  
        scanf("%d", &n);  
        printf("Case %d: %d\n", i, ans[n]);  
    }  
    return 0;
}