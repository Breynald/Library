#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[401];


int main()
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int n, from, to, max=0;
        scanf("%d", &n);
        memset(a, 0, sizeof(a));
        for(int j=1; j<=n; j++)
        {
            scanf("%d%d", &from, &to);
            if(from>to)
            {
                int t = from;
                from = to;
                to = t;
            }
            if(from%2==0)
            {
                from = from-1;
            }
            if(to%2==1)
            {
                to = to+1;
            }
            for(int k=from; k<=to; k++)
            {
                a[k]++;
            }
        }
        for(int k=0; k<=400; k++)
        {
            if(a[k]>max)
                max = a[k];
        }
        printf("%d\n", 10*max);
    }
    return 0;
}