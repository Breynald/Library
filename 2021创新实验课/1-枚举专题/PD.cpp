#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int a[2005][2005];
int lamp[2005];
int main()
{
    int n, m, flag=0;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            scanf("%1d", &a[i][j]);
            if(a[i][j]) lamp[j]++;
        }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++){
            lamp[j] -= a[i][j];
        }
        int j=1;
        for(j=1; j<=m; j++){
            if(lamp[j] == 0){
                for(int k=1; k<=m; k++){
                    lamp[k] += a[i][k];
                }
                break;
            }
        }
        if(j==m+1){flag=1;break;}

    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}