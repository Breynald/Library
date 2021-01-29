#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int p=0; p<n; p++)
    {
        int money, kind;
        scanf("%d%d", &money, &kind);
        float a[kind][2];
        for(int i=0; i<kind; i++)
            scanf("%f%f", &a[i][0], &a[i][1]);
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                if(a[i][0] > a[j][0])
                {
                    float t = a[i][0];
                    a[i][0] = a[j][0];
                    a[j][0] = t;
                    t = a[i][1];
                    a[i][1] = a[j][1];
                    a[j][1] = t;
                }
        float ans=0;
        float t=money;
        for(int i=0; i<kind; i++)
        {
            if(t <= 0) break;
            if(t >= a[i][1]*a[i][0])
            {
                ans += a[i][1];
                t = t-a[i][1]*a[i][0];
            }
            else
            {
                ans=ans+t/a[i][0];
                break;
            }
        }
        printf("%.2f\n", ans);
    }
    return 0;
}