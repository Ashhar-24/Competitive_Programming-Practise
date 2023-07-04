#include <iostream>
using namespace std;


void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	init();
	bool check = false;
	int n; cin >> n;
	for (int i = 1; i <= n ; i++) {
		if (i % 2 == 0) {
			cout << i << '\n';
			check = true;
		}

	}

	if (check == false)
		cout << "-1" << '\n';

	return 0;
}