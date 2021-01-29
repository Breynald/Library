#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct bit
{
    int a:3;
    int b:4;
}e;

int main()
{
    e.b=7;
    e.b++;
    printf("%d %d", sizeof(e), e.b);
    return 0;
}