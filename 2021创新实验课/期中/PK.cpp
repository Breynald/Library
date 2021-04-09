#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;
#define mem(a) memset(a, 0, sizeof(a))
#define dbg(x) cout << #x << " = " << x << endl
#define fi(i, l, r) for (int i = l; i < r; i++)
#define cd(a) scanf("%d", &a)
typedef long long ll;
int a[100010];
void push(stack<int> &s, int l, int r)
{
    for (int i = r; i >= l; i--)
        s.push(a[i]);
}
void prt(stack<int> &s)
{
    while (s.size())
    {
        printf("%d ", s.top());
        s.pop();
    }
    puts("");
}
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        stack<int> s;
        int n;
        cd(n);
        for (int i = 0; i < n; i++)
            cd(a[i]);
        a[n] = n + 1;
        int M = a[0], last = 0;
        for (int i = 0; i <= n; i++)
        {
            if (a[i] > M)
            {
                push(s, last, i - 1);
                last = i; 
                M = a[i];
            }
        }
        prt(s);
    }
    return 0;
}
