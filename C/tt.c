#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum aa{a, b=-1, c, d};
    printf("%d %d %d", a, b, c);
}