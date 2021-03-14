#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int a[1000];
bool cmp(int a, int b){
    return a<b;
}
int main()
{
    ll m, n;
    int flag=0;
    while(cin >> m >> n){
        flag = 0;
        for(int i=m; i<=n; i++){
            if(pow(i%10, 3) + pow((i%100)/10, 3) + pow(i/100, 3) == i){
                a[flag] = i;
                flag++;
            }
        }
        sort(a, a+flag, cmp);
        if(flag){
            for(int i=0; i<flag-1; i++){
                cout << a[i] << ' ';
            }
            cout << a[flag-1];
            cout << endl;
        }
        else cout << "no" << endl;
    }
    return 0;
}