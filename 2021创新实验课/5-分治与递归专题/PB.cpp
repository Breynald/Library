#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back

int main()
{
    vector<vector<int>> a;
    vector<int> temp;
    for(int j=1; j<=30; j++){
        temp.pb(j);
        if(j%10==0){
            a.pb(temp);
            temp.clear();
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<10; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}