#include <iostream>
#include <algorithm>
using namespace std;

int n, book[105], a[105], index_[105], ans[105];

void dfs(int left, int right, int deep)
{
    for(int i=n; i>=1; i--){
        if(index_[i]>=left && index_[i]<=right){
            ans[index_[i]] = deep;
            if(left<index_[i]) dfs(left, index_[i]-1, deep+1);
            if(right>index_[i]) dfs(index_[i]+1, right, deep+1);
            break;
        }
    }
}


void solve()
{
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        index_[a[i]] = i;
    }
    dfs(1, n, 0);
    for(int i=1; i<=n; i++)
        cout << ans[i] << ' ';
    cout << endl;
}





int main()
{
    int t;
    cin >> t;
    while(t--) solve();    
    return 0;
}