#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for(int i=1; i<=n; i++)
    {
        char a[51] = {'0'};
        int count=0;
        while((a[count++]=getchar())!='\n');
        printf("String #%d\n", i);
        count=0;
        while(a[count]!='\n')
        {
            printf("%c", a[count]=='Z' ? 'A' : a[count]+1);
            count++;
        }
        printf("\n\n");
    }
    return 0;
}