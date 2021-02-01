#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e3 + 10;
int t, n, a[maxn], res[maxn], vis[maxn];
void solve() {
	cin >> n;
	for(int i = 1; i <= 2 * n; i++)
		cin >> a[i];
	memset(vis, 0, sizeof(vis));
	if(n == 1){
		cout << "YES" << endl;
        cout << a[1]+a[2] << endl;
        cout << a[1]<<' '<<a[2] << endl;
		return;
	}
	sort(a + 1, a + 1 + 2 * n);
	int cnt = 2;
	int now = 0;
	int f = 1;
	int first = 0;
	for(int i = 2 * n - 1; i >= 1; i--) {
		res[1] = a[2 * n];
		res[2] = a[i];
		vis[2 * n] = 1, vis[i] = 1;
		cnt = 2;
		now = a[2 * n];
		first = a[2 * n] + a[i];
		int p1 = 2 * n - 1;
		while(1) {
			int x = 0, y = 0;
			int p2 = 0;
			while(vis[p1])
				p1--;
			x = a[p1];
			vis[p1] = 1;
			for(int j = 1; j <= 2 * n; j++) {
				if(a[j] + x > now)
					break;
				if(!vis[j] && a[j] + x == now) {
					y = a[j];
					p2 = j;
					break;
				}
			}
			if(y == 0){
				break;
			}
			now = max(x, y);
			res[++cnt] = x;
			res[++cnt] = y;
			vis[p2] = 1;
			if(cnt == 2 * n) {
				f = 0;
				cout << "YES" << endl;
				cout << first << endl;
				for(int i = 1; i <= 2 * n; i += 2) {
					printf("%d %d\n", res[i], res[i + 1]);
				}
				break;
			}
		}
		if(f == 0)
			break;
		memset(vis, 0, sizeof(vis));
	}
	if(f)
		cout << "NO" << endl;
}
int main() {
	cin >> t;
	while(t--)
		solve();
	return 0;
}