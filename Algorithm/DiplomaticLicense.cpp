#include <iostream>
#include <iomanip>
using namespace std;

struct point
{
    double x;
    double y;
}f, c, l;


int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        cout << n;
        cin >> f.x >> f.y;
        l.x = f.x;
        l.y = f.y;
        for(; n>1; n--)
        {
            cin >> c.x >> c.y;
            cout << " " << fixed << setprecision(6) << (c.x+l.x)/2 << " " << (c.y+l.y)/2;
            l.x = c.x;
            l.y = c.y;
        }
        cout << " " << (f.x+l.x)/2 << " " << (f.y+l.y)/2 << endl;
    }
    return 0;
}