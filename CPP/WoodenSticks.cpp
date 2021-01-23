#include <bits/stdc++.h>
using namespace std;
struct trick
{
    int length;
    int weight;
}a[5005];
int book[5005];
bool cmp(trick a,trick b)
{
    if(a.length==b.length)
    {
        return a.weight<=b.weight;
    }
    else return a.length<=b.length;
}


int main()
{
    //freopen("in.txt", "r+", stdin);
    //freopen("out.txt", "w+", stdout);
    int T;
    cin >> T;
    while(T--)
    {
        memset(book, 0, sizeof(book));
        int n, count=0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> a[i].length >> a[i].weight;
        }
        sort(a, a+n, cmp);
        for(int i=0; i<n; i++)
        {
            if(!book[i])
            {
                book[i] = 1;
                int x = a[i].weight;
                for(int j=i+1; j<n; j++)
                {
                    if(a[j].weight>=x && !book[j])
                    {
                        x = a[j].weight;
                        book[j] = 1;
                    }
                }
                count++;
            }
        }
        cout << count << endl;   
    }
    return 0;
}