#include <bits/stdc++.h>
using namespace std;


void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	init();

	int a, b; cin >> a >> b;

	int n = min(a, b);
	int ans = INT_MIN;
	for (int i = 1; i <= n; i++) {
		if (a % i == 0 && b % i == 0) {
			ans = max(ans, i);
		}
	}
	cout << ans;

	return 0;
}
