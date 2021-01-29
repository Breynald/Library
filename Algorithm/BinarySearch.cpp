#include <bits/stdc++.h>
using namespace std;
int a[1000], b[1000], c[1000], d[1000], m, n;
int aim[1000*1000];
bool Binary_Search(int x)
{
    int left=0, right=n*n-1;
    while(right >= left)
    {
        int s = (left+right)/2;
        if(aim[s] == x) return true;
        else if(aim[s] > x) right = s;
        else left = s + 1;
    }
    return false;
}

void solve()
{
    int t=0;
    bool flag = false;
    for(int i=0; i<n; i++)
        aim[t++] = a[i];
    for(int j=0; j<n; j++)
        aim[t++] = b[j];
    sort(aim, aim+n*n);
    for(int i=0; i<n && !flag; i++)
        for(int j=0; j<n && !flag; j++)
            if(Binary_Search(m-c[i]-d[j]))
                flag = true;
    if(flag)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return;
}
int main()
{
    freopen("in.in", "r+", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        for(int i=0; i<n; i++)
            cin >> c[i];
        for(int i=0; i<n; i++)
            cin >> d[i];
        solve();
    }
    return 0;
}