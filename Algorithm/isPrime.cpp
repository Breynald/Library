#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int a)
{
    for(int i=2; i<sqrt(a); i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    
    while(scanf("%d", &n)!=EOF)
    {
        int count=0;
        for(int i=0; i<n; i++)
        {
            int m;
            scanf("%d", &m);
            if(isprime(m))
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}       