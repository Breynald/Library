#include <bits/stdc++.h>
using namespace std;

int n;
template<typename T>
void cmp(T *a)
{
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[j] < a[i]){
                T t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main()
{
    n = 10;
    int a[n] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    float b[n] = {10.1, 9.9, 8.8, 7.7, 6.6, 5.5, 4.4, 3.3, 2.2, 1.1};
    
    cout << "int data items in original order" << endl;
    for(int i=0; i<n; i++)
        cout << ' ' << a[i] << ' ';
    cout << endl << "int data items in ascending order" << endl;
    cmp(a);
    for(int i=0; i<n; i++)
        cout << ' ' << a[i] << ' ';
    cout << endl;
    
    cout << "double data items in original order" << endl;
    for(int i=0; i<n; i++)
        cout << ' ' << b[i] << ' ';
    cout << endl << "double data items in ascending order" << endl;
    cmp(b);
    for(int i=0; i<n; i++)
        cout << ' ' << b[i] << ' ';
    cout << endl;
    
    getchar();
    return 0;
}