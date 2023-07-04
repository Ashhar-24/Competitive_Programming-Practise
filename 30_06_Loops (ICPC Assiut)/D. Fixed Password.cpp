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

	int x;
	while (cin >> x) {
		if (x == 1999) {
			cout << "Correct" << '\n';
			break;
		}
		else
			cout << "Wrong" << '\n';
	}

	// while (true) {
	// 	int x;
	// 	cin >> x;
	// 	if (x == 1999) {
	// 		cout << "Correct" << '\n';
	// 		break;
	// 	}
	// 	else
	// 		cout << "Wrong" << '\n';

	// }

	return 0;
}
