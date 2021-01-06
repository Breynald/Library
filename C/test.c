#include <stdio.h>
#include <stdlib.h>
int a[3000], b[3000], n;

void QSa(int left, int right)
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
        if(i<right) QSa(i, right);
        if(j>left) QSa(left, j);
    }
}

void QSb(int left, int right)
{
    if(left<right)
    {
        int temp = b[(left+right)/2];
        int i=left, j=right;
        while(i<=j)
        {
            while(b[i]>temp)
                i++;
            while(b[j]<temp)
                j--;
            if(i<=j)
            {
                int t = b[i];
                b[i++] = b[j];
                b[j--] = t;
            }
        }
        if(i<right) QSb(i, right);
        if(j>left) QSb(left, j);
    }
}

int fuck()
{
    int i=1, j=1, money=0, k, f, total=0;
    k = f = n;
    while(1)
    {
        if(total==n) break;
        if(a[i]>b[j])
        {
            i++;
            j++;
            total++;
            money++;
            continue;
        }
        else if(a[i]<b[j])
        {
            k--;
            j++;
            total++;
            money--;
            continue;
        }
        else
        {
            if(a[k]>b[f])
            {
                k--;f--;
                money++;
                total++;
                continue;
            }
            if(a[k]<b[j])
            {
                k--;
                money--;
                j++;
                total++;
                continue;
            }
            else
            {
                k--;
                j++;
                total++;
                continue;
            }
        }
    }
    return money*200;
}

int main()
{
    while(scanf("%d", &n) && n!=0)
    {
        for(int i=1; i<=n; i++)
            scanf("%d", a+i);
        for(int i=1; i<=n; i++)
            scanf("%d", b+i);
        QSa(1, n);
        QSb(1, n);
        printf("%d\n", fuck());
    }
    return 0;
}