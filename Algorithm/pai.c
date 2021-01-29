#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, temp=1;
    double sum=0;
    scanf("%d", &n);
    for(int i=1; i<n; i+=2)
    {
        sum += temp*1/(double)i;
        temp *= -1;
    }
    printf("%lf", 4*sum);
    return 0;
}