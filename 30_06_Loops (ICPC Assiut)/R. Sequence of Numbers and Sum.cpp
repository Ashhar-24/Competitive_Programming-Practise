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

	while (true) {
		int n, m;
		cin >> n >> m;

		if (n > 0 && m > 0) {
			int p = min(m, n);
			int q = max(n, m);
			int sum = 0;
			for (int i = p; i <= q; i++) {
				sum += i;
				cout << i << " ";
			}

			cout << "sum =" << sum << '\n';
		}
		else
			break;
	}

	// using for loop

	// for (int j = 1; j > 0; j++) {
	// 	int n, m;
	// 	cin >> n >> m;

	// 	if (n > 0 && m > 0) {
	// 		int p = min(m, n);
	// 		int q = max(n, m);
	// 		int sum = 0;
	// 		for (int i = p; i <= q; i++) {
	// 			sum += i;
	// 			cout << i << " ";
	// 		}

	// 		cout << "sum =" << sum << '\n';
	// 	}
	// 	else {
	// 		break;
	// 	}
	// }

	return 0;
}
