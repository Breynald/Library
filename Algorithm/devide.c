#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a;
    unsigned short b, c;
    scanf("%lu", &a);
    b = a>>16;
    c = (a<<16)>>16;    
    printf("%hd\n%hd", b, c);
    return 0;
}