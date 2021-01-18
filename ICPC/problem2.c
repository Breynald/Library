#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char string[1000000];
int isyy(char c)
{
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        return 1;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    return 0;
}
int isal(int left, int right)
{
    int i;
    for(i=left; i<=right; i++)
    {
        if(string[i]>='a' && string[i]<='z')
        {}
        else if(string[i]>='A' && string[i]<='Z')
        {}
        else return i;
    }
    return 0;
}
void function(int left, int right)
{
    if(left>right)
        return;
    int a;
    if(a=isal(left, right))
    {
        function(left, a-1);
        printf("%c", string[a]);
        function(a+1, right);
        return;
    }
    if(isyy(string[left]))
    {
        int i;
        for(i=left; i<=right; i++)
            printf("%c", string[i]);
        printf("ay");
        return;
    }
    else
    {
        int i;
        for(i=left+1; i<=right; i++)
            printf("%c", string[i]);
        printf("%c", string[left]);
        printf("ay");
        return;
    }
}



int main()
{
    while(gets(string))
    {
        int l=0, r=0;
        while(string[r]!='\0')
        {
            if(string[r]==' ')
            {
                function(l, r-1);
                printf(" ");
                l = r = r + 1;
            }
            r++;
        }
        function(l, r-1);
        printf("\n");
    }
    return 0;
}