#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[101];
int main()
{
    int number;
    while(scanf("%d", &number) != EOF)
    {
        int n, m, mark, count=0;
        memset(a, 0, 101);
        while(scanf("%d%d", &n, &m) && n && m)
        {
            if(n==number)
                mark = m;
            a[m]++;
        }
        for(int i=100; i>=0; i--)
        {
            if(i==mark)
            {
                count++;
                break;
            }
            count += a[i];
        }
        printf("%d\n", count);
    }
    return 0;
}