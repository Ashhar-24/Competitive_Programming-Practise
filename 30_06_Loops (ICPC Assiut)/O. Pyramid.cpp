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

	for (int i = 1 ; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}
