#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned long long atollu(char a[])
{
    int len = strlen(a);
    unsigned long long temp = 1, sum = 0;
    for(int i=len-1; i>=0; i--)
    {
        sum += (a[i]-'0')*temp;
        temp *= 10;
    }
    return sum;
}

int main()
{
    char a[20];
    scanf("%s", a);
    printf("%llu", atollu(a));
    return 0;
}