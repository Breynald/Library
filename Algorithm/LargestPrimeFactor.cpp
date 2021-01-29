#include <bits/stdc++.h>
using namespace std;
#define maxn 1000005
int a[maxn];
int main()
{
    int ans=0;
    for(int i=2; i<maxn; i++)
    {
        if(!a[i])
            ans++;
        for(int j=i; j<maxn; j+=i)
            a[j] = ans;
    }
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        cout << a[n] << endl;
    }
    return 0;
}