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

	int t;
	cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		int n = min(a, b);
		int m = max(a, b);
		int sum = 0;

		for (int i = n + 1; i < m; i++) {    //i=n+1 as we dont have to include these two nos
			if (i % 2 != 0) {
				sum += i;
			}
		}
		cout << sum << '\n';
	}

	return 0;
}
