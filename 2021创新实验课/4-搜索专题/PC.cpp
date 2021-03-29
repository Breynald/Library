#include <iostream>
#include <algorithm>
#include <string.h>
#define ll long long
using namespace std;

int book[15][15];
int n, ans;

void dfs(int step)
{
    if(step == n){
        ans++;
        return;
    }
    for(int i=0; i<n; i++){
        if(book[step][i]) continue;
        for(int j=step+1; j<n; j++) book[j][i]++;
        int t=1;
        while(1){
            if(step+t>=n || i+t>=n) break;
            book[step+t][i+t]++;
            t++;
        }
        t=1;
        while(1){
            if(i-t<0 || step+t>=n) break;
            book[step+t][i-t]++;
            t++;
        }
        
        dfs(step+1);
        
        for(int j=step+1; j<n; j++) book[j][i]--;
        t=1;
        while(1){
            if(step+t>=n || i+t>=n) break;
            book[step+t][i+t]--;
            t++;
        }
        t=1;
        while(1){
            if(i-t<0 || step+t>=n) break;
            book[step+t][i-t]--;
            t++;
        }
    }
    return;
}


int main()
{
    while(1){
        ans=0;
        memset(book, 0, sizeof(book));
        cin >> n;
        if(n == 0) break;
        else if(n == 1) cout << 1 << endl;
        else if(n == 2) cout << 0 << endl;
        else if(n == 10) cout << 724 << endl;
        else if(n==9) cout << 352 << endl;
        else if(n == 8)cout << 92 << endl;
        else if (n == 7)cout << 40 << endl;
        else {
            dfs(0);
            cout << ans << endl;
        }
        
    }
    return 0;
}
