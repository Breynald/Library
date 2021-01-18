#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
    if(n==0)
        return 0;
    else if (n%10>0)
    {
        return n%10;
    }
    else return f(n/10);
    
}

long long S(int p, int q)
{
    if(q-p<10)
    {
        long long i, sum=0;
        for(i=p; i<=q; i++)
        {
            sum += f(i);
        }
        return sum;
    }
    else
    {
        long long sum=0;
        int pp=p, qq=q;
        while(pp%10!=0)
            pp++;
        sum += S(p, pp-1);
        while(qq%10!=0)
            qq--;
        sum += S(qq+1, q);
        sum += 45*(qq-pp)/10;
        sum += S(pp/10, qq/10);
        return sum;
    }
}


int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b) && a!=-1)
    {
        printf("%ld\n", S(a, b));
    }
    return 0;
}