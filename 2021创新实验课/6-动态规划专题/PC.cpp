#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;
const int maxdaodan=2e5;
int dp[maxdaodan],dp2[maxdaodan],high[maxdaodan],ans=0,ans2=0,daodan=0;
int main()
{
    int t;
    while(cin >> t){
        memset(dp, 0, sizeof(dp));
        memset(dp2, 0, sizeof(dp2));
        memset(high, 0, sizeof(high));
        ans = ans2 = daodan = 0;
        while(t--){
            cin>>high[daodan];
            dp[daodan]=1;
            dp2[daodan]=1;
            daodan++;
        }
        for(int j=0; j<daodan; j++)
        {
            for(int k=0; k<j; k++)
            {
                if(high[k]>=high[j])
                    dp[j]=max(dp[j],dp[k]+1);
                if(high[k]<=high[j])
                    dp2[j]=max(dp2[j],dp2[k]+1);
            }
            ans=max(ans,dp[j]);
            ans2=max(ans2,dp2[j]);
        }
        cout << ans2 << endl;
    }
}