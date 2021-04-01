#include <iostream>
#include <cmath>
#include <algorithm> 
#include <cstring>
using namespace std;

typedef long long ll;
const int maxn = 1e5 + 10;
const int mod = 100000000 - 3;
struct node{
	int val;
	int id;
}a[maxn], b[maxn];
int c[maxn];
int d[maxn];
ll n, ans;

bool com(node x, node y) {
	return x.val < y.val;
}

void merge_sort(int l, int r) {
	if(l == r)	return;
	int mid = l + r >> 1;
	merge_sort(l, mid);
	merge_sort(mid + 1, r);
	int i = l, j = mid + 1, k = l;
	while(i <= mid && j <= r) {
		if(c[i] <= c[j])	d[k++] = c[i++];
		else	ans += mid - i + 1, ans %= mod, d[k++] = c[j++];	
	}
	while(i <= mid) d[k++] = c[i++];
	while(j <= r)	d[k++] = c[j++];
	for(int i = l; i <= r; i++)	c[i] = d[i];
}

signed main() {
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i].val, a[i].id = i;
	for(int i = 1; i <= n; i++)
		cin >> b[i].val, b[i].id = i;
	sort(a + 1, a + 1 + n, com);
	sort(b + 1, b + 1 + n, com);
	for(int i = 1; i <= n; i++)
		c[a[i].id] = b[i].id;
	for(int i = 1; i <= n; i++)
		c[b[i].id] = a[i].id;
//	for(int i = 1; i <= n; i++)
//		cout << c[i] << " ";
//	cout << endl;
 	merge_sort(1, n);
	cout << ans << endl;
	return 0;
}
