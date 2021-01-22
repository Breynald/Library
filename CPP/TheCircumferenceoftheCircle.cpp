#include <iostream>
#include <iomanip>
#include <math.h>
#define pai 3.141592653589793
using namespace std;
struct point
{
    double x;
    double y;
}p1, p2, p3;
int main()
{
    
    double d1, d2, d3, p, s, sin;
    while(scanf("%lf%lf%lf%lf%lf%lf", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y)!=EOF)
    {
        d1 = sqrt( pow((p1.x-p2.x), 2) + pow((p1.y-p2.y), 2) );
        d2 = sqrt( pow((p2.x-p3.x), 2) + pow((p2.y-p3.y), 2) );
        d3 = sqrt( pow((p3.x-p1.x), 2) + pow((p3.y-p1.y), 2) );
        p = (d1+d2+d3)/2;
        s = sqrt( p * (p-d1) * (p-d2) * (p-d3) );
        sin = (2*s)/d1/d2;
        printf("%.2lf\n", pai*d3/sin);
    }
    return 0;
}