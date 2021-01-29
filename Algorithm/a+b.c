#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, a, b, sum[10000]={0};
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &b);
        for(int j=0; j<b; j++)
        {
            scanf("%d", &a);
            sum[i] += a;
        }
    }
    for(int i=0; i<n-1; i++)
        printf("%d\n\n", sum[i]);
    printf("%d\n", sum[n-1]);
    return 0;
}