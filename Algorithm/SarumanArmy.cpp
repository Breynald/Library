#include <iostream>
#include <string.h>
using namespace std;
int a[1005];

int main()
{
    int r, n;
    while(scanf("%d%d", &r, &n) && r != -1)
    {
        int ans=0;
        memset(a, 0, sizeof(a));
        for(int i=0; i<n; i++)
        {
            int m;
            cin >> m;
            a[m]=1;
        }
        for(int i=0; i<1001; i++)
        {
            if(a[i])
            {
                for(int j=r; j>=0; j--)
                {
                    if(a[i+j])
                    {
                        ans++;
                        i += j;
                        break;
                    }
                }
                i += r;
            }
        }
        cout << ans << endl;
    }
    return 0;
}