#include<cstring>
#include<cstdio>
#include<iostream>
#include <algorithm>
using namespace std;
const int maxn = 101000;
int dp[maxn],v[maxn],m;
int main()
{
    //int n;
    while(scanf("%d",&m),m>0){
        memset(dp,0,sizeof(dp));
        memset(v,0,sizeof(v));
        int n=0,x,y,sum=0;
        for(int i=0;i<m;i++){
            scanf("%d%d",&x,&y);
            for(int j=0;j<y;j++){
                v[n++]=x;
                sum+=x;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=sum/2;j>=v[i];j--){
                dp[j]=max(dp[j],dp[j-v[i]]+v[i]);
            }
        }
        printf("%d %d\n",sum-dp[sum/2],dp[sum/2]);
 
    }
    return 0;
}