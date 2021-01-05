#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, m=1;
    while(scanf("%d", &n) && n!=0)
    {
        int count=0, a[n+1], sum=0, aver;
        for(int i=1; i<=n; i++)
        {
            scanf("%d", a+i);
            sum += a[i];
        }
        aver = sum / n;
        for(int i=1; i<=n; i++)
        {
            if(a[i]>aver)
            {
                count += a[i] - aver;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", m, count);
        m++;
    }
}