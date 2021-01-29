#include <stdio.h>
#include <stdlib.h>


void QSa(int left, int right, int *a)
{
    if(left<right)
    {
        int temp = a[(left+right)/2];
        int i=left, j=right;
        while(i<=j)
        {
            while(a[i]>temp)
                i++;
            while(a[j]<temp)
                j--;
            if(i<=j)
            {
                int t = a[i];
                a[i++] = a[j];
                a[j--] = t;
            }
        }
        if(i<right) QSa(i, right, a);
        if(j>left) QSa(left, j, a);
    }
}

int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        int a[n+1];
        for(int i=1; i<=n; i++)
            scanf("%d", a+i);
        QSa(1, n, a);
        int i=1, j=n, temp=1;
        while (i!=j)
        {
            if(temp%2==1)
            {
                printf("%d ", a[i]);
                i++;
                temp++;
            }
            else if(temp%2==0)
            {
                printf("%d ", a[j]);
                j--;
                temp--;
            }
        }
        printf("%d\n", a[i]);
    }
}