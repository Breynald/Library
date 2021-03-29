#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, m;
    cin >> n >> m;
    ll sum=0;
    for(int i=1; i<=m; i++) sum += i*i*i;
    if(sum > n) {cout << 0 << endl;return 0;}
    
    


    return 0;
}