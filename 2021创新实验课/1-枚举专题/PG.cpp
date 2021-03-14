#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
#define ll long long
int book[9];
int m = 999;
int a[9][9] = {{1, 1, 0, 1, 1, 0, 0, 0, 0},
                {1, 1, 1, 0, 0, 0, 0, 0, 0},
                {0, 1, 1, 0, 1, 1, 0, 0, 0},
                {1, 0, 0, 1, 0, 0, 1, 0, 0},
                {0, 1, 0, 1, 1, 1, 0, 1, 0},
                {0, 0, 1, 0, 0, 1, 0, 0, 1},
                {0, 0, 0, 1, 1, 0, 1, 1, 0},
                {0, 0, 0, 0, 0, 0, 1, 1, 1},
                {0, 0, 0, 0, 1, 1, 0, 1, 1}};
int clock[9];



int main()
{
    for(int i=0; i<9; i++){
        cin >> clock[i];
    }
    for(int i1=0; i1<4; i1++)
        for(int i2=0; i2<4; i2++)
            for(int i3=0; i3<4; i3++)
                for(int i4=0; i4<4; i4++)
                    for(int i5=0; i5<4; i5++)
                        for(int i6=0; i6<4; i6++)
                            for(int i7=0; i7<4; i7++)
                                for(int i8=0; i8<4; i8++)
                                    for(int i9=0; i9<4; i9++){
                                        int flag=1;
                                        //cout << 1;
                                        for(int i=0; i<9; i++){
                                            if((clock[i]+a[0][i]*i1+a[1][i]*i2+a[2][i]*i3+a[3][i]*i4+a[4][i]*i5+a[5][i]*i6+a[6][i]*i7+a[7][i]*i8+a[8][i]*i9)%4 != 0){
                                                flag=0;
                                                break;
                                            }
                                        }
                                        if(flag){
                                            if(i1+i2+i3+i4+i5+i6+i7+i8+i9<m){
                                                book[0]=i1;
                                                book[1]=i2;
                                                book[2]=i3;
                                                book[3]=i4;
                                                book[4]=i5;
                                                book[5]=i6;
                                                book[6]=i7;
                                                book[7]=i8;
                                                book[8]=i9;
                                            }
                                        }
                                    }
     
    for(int i=0; i<9; i++){
        for(int j=book[i]; j>0; j--)
            cout << i+1 << ' ';
    }
    cout << endl;
    return 0;
}