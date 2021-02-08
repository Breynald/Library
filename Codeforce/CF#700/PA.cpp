#include <bits/stdc++.h>
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


void change1(char& ch)
{
    char c = 'a';
    while(c == ch)
        c++;
    ch = c;
    return;
}

void change2(char& ch)
{
    char c = 'z';
    while(c == ch)
        c--;
    ch = c;
    return;
}
int main()
{
    FIO;
    //FRE;
    int t; cin >> t;
    while(t--)
    {
        string ss;
        cin >> ss;
        f(ss.length())
        {
            if(i%2 == 0)
                change1(ss[i]);
            else
                change2(ss[i]);
        }
        cout << ss << endl;
    }
    return 0;
}