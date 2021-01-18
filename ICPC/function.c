#include <stdio.h>
#include <stdlib.h>

int function(int base, int n)
{
    int sum=0;
    while(n)
    {
        sum += n%base;
        n /= base;
    }
    return sum;
}

int main()  
{
    int i;
    for(i=2992; i<10000; i++)
    {
        if(function(10, i)==function(12, i) && function(10, i)==function(16, i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}