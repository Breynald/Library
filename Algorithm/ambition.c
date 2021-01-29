#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v, n;
    while(scanf("%d", &v) && v!=0 && scanf("%d", &n))
    {
        int a[n][2];
        for(int i=0; i<n; i++)
            scanf("%d%d", &a[i][0], &a[i][1]);
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                if(a[i][0] < a[j][0])
                {
                    int t = a[i][0];
                    a[i][0] = a[j][0];
                    a[j][0] = t;
                    t = a[i][1];
                    a[i][1] = a[j][1];
                    a[j][1] = t;
                }
        int count=0, i=0, value=0;
        while(count!=v)
        {
            count++;
            a[i][1]--;
            value += a[i][0];
            if(a[i][1]==0)
                i++;
            if(i==n)
                break;
        }
        printf("%d\n", value);
    }
}