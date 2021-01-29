#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    int N;
    scanf("%d", &N);
    for(; N--; N>0){
    int n;
    char a[100005], b[100005], c[100005];
    memset(a, '1', 100005);
    scanf("%d%s", &n, b);

    c[0] = '0' + ((a[0]-'0') + (b[0]-'0'));
    for(int i=1; i<n; i++)
    {
        while((a[i]-'0') + (b[i]-'0') == c[i-1]-'0')
        {
            a[i]--;
        }
        c[i] = '0' + ((a[i]-'0') + (b[i]-'0'));
    }
    a[n] = '\0';
    puts(a);
    }
    return 0;
}