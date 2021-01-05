#include <stdio.h>

double Fact(double n)
{
    if(n==1) return 1;
    else return n * Fact(n-1);
}

int main()
{
    int i=1;
    double m, e=1;
    while ((m = 1/Fact(i++))>=1e-8)
    {
        e += m;
    }
    printf("%lf", e);
    return 0;
}