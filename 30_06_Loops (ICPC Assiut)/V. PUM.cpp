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

	int start = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 3; j++) {
			cout << start << " ";
			start++;
		}
		cout << "PUM" << '\n';
		start++;

		// alter
		// if (j == 4) {
		// 		cout << "PUM" << '\n';
		// 		start++;
		// 	}
		// 	else {

		// 		cout << start << " ";
		// 		start++;
		// 	}
	}

	return 0;
}
