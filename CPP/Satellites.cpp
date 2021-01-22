#include <iostream>
#include <string.h>
#include <math.h>
#include <iomanip>
#define r 6440
#define pai 3.14159265358979323846264
using namespace std;
template <typename S>
S trans1(S x)
{
    return x/180 * pai;
}
template <typename S>
S trans2(S x)
{
    return x/60/180 * pai;
}

int main()
{
    char ch[5];
    double a, s;
    while(scanf("%lf%lf%s", &s, &a, ch) != EOF)
    {
        if(strcmp(ch, "deg")==0)
            a = trans1(a);
        else a = trans2(a);
        int i;
        for(i=0; ; i++)
        {
            if(2*pai*i>=a)
            {
                a -= 2*pai*(i-1);
                break;
            }
        }
        cout << fixed << setprecision(6) << (2*pai*(r+s))*(a/2/pai) <<' '<< 2*(r+s)*sin(a/2) << endl;
    }
    return 0;
}