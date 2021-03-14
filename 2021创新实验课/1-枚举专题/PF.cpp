#include <iostream>
#include <math.h>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
#define ll long long
int isprime(int a){
    if(a==2) return 1;
    for(int i=2; i<=sqrt(a); i++){
        if(a%i == 0) return 0;
    }
    return 1;
}

int main()
{
    ll m, a, b, p, q, marea;
    int prime[500], ct=0;
    for(int i=2; i<500; i++){
        if(isprime(i)){
            prime[ct++] = i;
        }
    }
    while(1){
        marea = 0;
        cin >> m >> a >> b;
        if(m==0 && a==0 && b==0) break;
        for(int i=0; i<ct; i++){
            for(int j=i; j<ct; j++){
                if(prime[i]*prime[j] > m) continue;
                if((double)prime[i]/prime[j] < (double)a/b) continue;
                if(prime[i]*prime[j]>marea){
                    marea = prime[i]*prime[j];
                    q = prime[i];
                    p = prime[j];
                }
            }
        }
        cout << q << ' ' << p << endl;
    }
    return 0;
}