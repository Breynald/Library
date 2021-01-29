#include <stdio.h>
#include <stdlib.h>

int fuck(int n, int u, int d)
{
    int sum=0, count=0;
    while(sum < n)
    {
        if(count%2==0)
            sum += u;
        else sum -= d;
        count++;
    }
    printf("%d\n", count);
    return 0;
}


int main()
{
    int n, u, d;
    while(scanf("%d%d%d", &n, &u, &d) && n!=0)
    {
        fuck(n, u, d);
    }
    return 0;
}
