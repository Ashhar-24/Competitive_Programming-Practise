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

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long ans = 1;
		for (int i = 1; i <= n; i++) {
			ans *= i;
		}
		cout << ans << '\n';
	}


	return 0;
}
