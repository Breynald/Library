#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
        {
            printf("Scenario #%d:\nyes\n\n", i);            
        }
        else 
            printf("Scenario #%d:\nno\n\n", i);
    }
    return 0;
}