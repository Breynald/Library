#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int a[4], t;
        long m, l;
        scanf("%ld", &m);
        l = m % 10;
        a[0]=l;
        a[1]=(l*l)%10;
        a[2]=(l*l*l)%10;
        a[3]=(l*l*l*l)%10;
        t = m%4 ? m%4-1 : 3;
        printf("%d\n", a[t]);
    }
    return 0;
}