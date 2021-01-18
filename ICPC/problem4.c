#include <stdio.h>
#define max 6227020800
#define min 10000
long long fact(int n)
{
    if(n<0)
    {
        if(n%2==-1)
            return max+1;
        else
            return min-1;        
    }
    if(n==0)
        return 1;
    else
    {
        long long sum=1;
        int i;
        for(i=1; i<=n; i++)
        {
            sum *= i;
            if(sum>max)
                return max+1;
        }
    }
}


int main()
{
    int a;
    while(scanf("%d", &a)!=EOF)
    {
        long long b = fact(a);
        if(b>max)
            printf("Overflow!\n");
        else if(b<min)
            printf("Underflow!\n");
        else printf("%ld\n", b);
    }
    return 0;
}