#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int year, m, count=0;
        scanf("%d%d", &year, &m);
        if(((year%400==0) || (year%4==0 && year%100!=0)) && m==1)
            count=1;
        else
        {
            while(count!=m)
            {
                if(((year%400==0) || (year%4==0 && year%100!=0)))
                    count++;
                year++;
            }
            year--;
        }
        printf("%d\n", year);
    }
    return 0;
}