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

	int n;
	cin >> n;

	for (int i = 0 ; i < n; i++) {
		int space = n - 1 - i;
		for (int j = 1; j <= space; j++) {
			cout << " ";
		}
		for (int k = 1; k <= 2 * i + 1; k++) {
			cout << '*';
		}
		cout << '\n';
	}

	// reversing it
	for (int i = n; i > 0; i--) {
		// sapce
		for (int j = n - i; j > 0 ; j--) {
			cout << " ";
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			cout << '*';
		}

		cout << '\n';
	}

	return 0;
}
