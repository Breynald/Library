#include <iostream>
using namespace std;
#define ll unsigned long long
ll gcd(ll a, ll b)
{
    if(a%b==0) return b;
    else return gcd(b, a%b);
}

ll lcm(ll a, ll b)
{
    return a*b/gcd(a, b);
}

int main()
{
    int n;
    scanf("%d", &n);
    for(; n>0; n--)
    {
        ll a, A, b, B, fm, fz, yue, t;
        scanf("%llu/%llu%llu/%llu", &a, &A, &b, &B);
        t = gcd(a, A);
        a /= t;
        A /= t;
        t = gcd(b, B);
        b /= t;
        B /= t;
        fm = lcm(A, B);
        //printf("%lld\n", fm);
        a *= fm / A;
        b *= fm / B;
        //printf("%lld %lld\n", a, b);
        fz = lcm(a, b);
        //printf("%lld\n", fz);
        while((yue=gcd(fz, fm))!=1)
        {
            fz /= yue;
            fm /= yue;
            //printf("%llu %llu\n", fz, fm);
        }
        if(fm == 1)
            printf("%llu\n", fz);
        else printf("%llu/%llu\n", fz, fm);
    }
}
/*
a  b
-  -
A  B
*/