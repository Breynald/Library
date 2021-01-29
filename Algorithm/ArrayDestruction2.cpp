#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <algorithm>
using namespace std;
int a[2005], book[2005], ans[2005][2], n, flag;

ofstream fout("out.txt");

bool cmp(int a, int b){ return a>b; }

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        memset(a, 0, 2005);
        memset(book, 0, 2005);
        flag=0;
        cin >> n;
        for(int i=0; i<n*2; i++)
            cin >> a[i];
        sort(a, a+2*n, cmp);
        


    }

    fout.close();
    return 0;
}
