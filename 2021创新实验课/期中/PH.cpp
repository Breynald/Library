#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 3e4 + 7;
int num[maxn];
int a[maxn], b[maxn];
bool solve(int n) {
	for(int i = 1;i <= n;++i) a[i] = b[i] = 0;
	a[1] = num[1], b[1] = 0;
	for(int i = 2;i <= n;++i) {
		a[i] = min(num[i]-b[i-1], a[i-1]);
		b[i] = num[i] - a[i];
	}a[0] = 1e9;
	for(int i = 1;i <= n;++i) {
		if(a[i]>a[i-1] || a[i] < 0 || a[i] > num[i] || a[i] + b[i] != num[i]) return false;
	}b[n+1] = 1e9;
	for(int i = n;i >= 1;--i) {
		if(b[i]>b[i+1] || b[i] < 0 || b[i] > num[i]) return false; 
	} return true;
}
int main() {
	int T;scanf("%d",&T);
	while(T--) {
		int n;scanf("%d",&n);
		for(int i = 1;i <= n;++i) {
			scanf("%d",&num[i]);
		}
		if(n < 3) printf("YES\n");
		else {
			bool res = solve(n);if(res) printf("YES\n"); else printf("NO\n");
		}
	}
	return 0;
}
