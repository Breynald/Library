#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int jc(int n)
{
    if(n==1) return 1;
    else return n*jc(n-1);
}


int main()
{
    double x, sum=1, temp=1;
    scanf("%lf", &x);
    for(int i=1; i<=10; i++)
    {
        temp = pow(x, 2*i) / jc(2*i);
        sum += pow(-1, i)*temp;
    }
    printf("%lf\n", sum);
    printf("%lf", cos(x));
    return 0;
}