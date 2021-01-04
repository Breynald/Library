#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    gets(a);
    gets(b);
    int n = strlen(a) < strlen(b) ? strlen(a) : strlen(b);
    for(int i=0; i<n; i++)
    {
        if(a[i] == b[i])
            printf("%c", a[i]);
    }
    return 0;
}