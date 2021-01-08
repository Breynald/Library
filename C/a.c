#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[100], b[100];
void QS1(int left, int right)
{
    int i=left, j=right;
    int temp = a[(left+right)/2];
    while(i<=j)
    {
        while(a[i]<temp)
            i++;
        while(a[j]>temp)
            j--;
        if(i<=j)
        {
            int t=a[i];
            a[i++] = a[j];
            a[j--] = t;
        }
    }
    if(i<right) QS1(i, right);
    if(j>left) QS1(left, j);
}
void QS2(int left, int right)
{
    int i=left, j=right;
    int temp = b[(left+right)/2];
    while(i<=j)
    {
        while(b[i]<temp)
            i++;
        while(b[j]>temp)
            j--;
        if(i<=j)
        {
            int t=b[i];
            b[i++] = b[j];
            b[j--] = t;
        }
    }
    if(i<right) QS2(i, right);
    if(j>left) QS2(left, j);
}


int main()
{
    int n;
    while(scanf("%d", &n) && n)
    {
        int aa=0, bb=0;
        for(int i=0; i<n; i++)
            scanf("%d", a+i);
        for(int i=0; i<n; i++)
            scanf("%d", b+i);
        QS1(0, n-1);
        QS2(0, n-1);
        for(int i=0; i<n; i++)
        {
            if(a[i]<b[i])
            {
                bb+=2;
            }
            else if(a[i]>b[i])
            {
                aa+=2;
            }
            else
            {
                aa++;
                bb++;
            }
        }
        printf("%d vs %d\n", aa, bb);
    }
}