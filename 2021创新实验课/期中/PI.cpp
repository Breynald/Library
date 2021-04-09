#include <iostream>  
#include <cstdio>  
#include <cstring>  
#include <algorithm>  
using namespace std;  
const int maxn = 20005;  
 
int main() {  
	int t, a, b, c;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d", &a, &b, &c);
		int ans = 0;
		for (int i = 1; c-b*i > 0; i++) 
			if ((c-b*i) % a == 0)
				ans++;
 
		printf("%d\n", ans);
	}
	return 0;
}  