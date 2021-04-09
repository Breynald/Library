#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define N 1000003
using namespace std;
int r1[N],ans[N];
int x[N],y[N],cnt;
int a[N],n;
void calc(int &a,int &b,int x)
{
	if (x==1)  a=3,b=2;
	if (x==2)  a=1,b=3;
	if (x==3)  a=1,b=2;
}
void merge(int pos,int l,int r)
{
	int mid=(l+r)/2;
	if (l==r) return;
	int t1,t2;
	calc(t1,t2,pos);
	for (int i=l;i<=mid;i++) x[++cnt]=pos,y[cnt]=t1;
	for (int i=l;i<=mid;i++) 
	  x[++cnt]=t1,y[cnt]=t2;
	merge(t2,l,mid); 
	merge(pos,mid+1,r);
	int i=l; int j=mid+1; int k1=l;
	while (i<=mid&&j<=r)
	{
		if (a[i]<=a[j]){
		  r1[k1]=a[i]; i++; k1++;  x[++cnt]=t2,y[cnt]=t1;
		}
		else r1[k1]=a[j],j++,k1++,x[++cnt]=pos,y[cnt]=t1;
	}
	while (i<=mid)
	{
		r1[k1]=a[i]; i++; k1++;
		x[++cnt]=t2; y[cnt]=t1;
	}
	while (j<=r){
		r1[k1]=a[j]; j++; k1++;
		x[++cnt]=pos; y[cnt]=t1;
	}
	for (int i=l;i<=r;i++)
	 a[i]=r1[i],x[++cnt]=t1,y[cnt]=pos;
}
int main()
{
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	merge(1,1,n);
	printf("%d\n",cnt);
	for (int i=1;i<=cnt;i++)
	 printf("%d %d\n",x[i],y[i]);
	return 0;
}