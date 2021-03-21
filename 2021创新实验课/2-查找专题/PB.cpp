#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

struct note{
    ll id;
    ll score;

}a[5005];

bool cmp(note a, note b)
{
    if(a.score > b.score) return 1;
    else if(a.score == b.score){
        return a.id < b.id;
    }
    else return 0;
}

int main()
{
    ll n, m; cin >> n >> m;
    m = floor(m*1.5);
    for(int i=0; i<n; i++){
        cin >> a[i].id >> a[i].score;
    }
    sort(a, a+n, cmp);
    while(a[m-1].score == a[m].score) m++;
    cout << a[m-1].score << ' ' << m << endl;
    for(int i=0; i<m; i++) cout << a[i].id << ' ' << a[i].score << endl;
    return 0;
}