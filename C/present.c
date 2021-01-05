#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[500000];

void roll(int m)
{
    int i=0;
    while(a[i]!=m)
    {
        if(a[i]==0)
            break;
        i++;
    }
    if(a[i]==m)
        while(a[i]!=0)
        {
            a[i] = a[i+1];
            i++;
        }
    else
    {
        a[i] = m;
    }
    return;
}

int main()
{
    int n;
    while(scanf("%d", &n) && n!=0)
    {
        memset(a, 0, sizeof(int)*500000);
        for(int i=0; i<n; i++)
        {
            int m;
            scanf("%d", &m);
            roll(m);
        }
        printf("%d\n", a[0]);
    }
    return 0;
}