#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b;
    scanf("%d", &b);
    for(int j=0; j<b; j++)
    {
        scanf("%d", &n);
        int sum=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    
    }
    return 0;
}