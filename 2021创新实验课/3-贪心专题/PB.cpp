#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    ll c1, c2, c3, c4;
    cin >> c1 >> c2 >> c3 >> c4;
    if(c1 != c4) cout << 0 << endl;
    else{
        if(c3 == 0) cout << 1 << endl;
        else if(c1>0) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}