#include <iostream>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vd vector<double>
#define vvd vector<vector<double>>
#define pb push_back
#define f(n) for(int i=0; i<n; i++)
#define FIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define FRE freopen("in.in", "r+", stdin);freopen("out.out", "w+", stdout)

int main()
{
    int n; cin >> n;
    int head=0, tail=n-1;
    char a[2005], b[2005];
    f(n)
        cin >> a[i];
    f(n)
    {
        if(a[head] == a[tail])
        {
            int t_head = head+1, t_tail = tail-1;
            while(a[t_head] == a[t_tail])
            {
                t_head++;
                t_tail--;
            }
            if(a[t_head] < a[t_tail])
            {
                b[i] = a[head];
                head++;
            }
            else
            {
                b[i] = a[tail];
                tail--;
            }
        }
        else if(a[head] < a[tail])
        {
            b[i] = a[head];
            head++;
        }
        else
        {
            b[i] = a[tail];
            tail--;
        }
    }
    int ct=0;
    f(n)
    {
        cout << b[i];
        ct++;
        if(ct%80==0)
            cout << endl;
    }
    return 0;
}