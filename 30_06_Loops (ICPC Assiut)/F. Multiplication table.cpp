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

	int n; cin >> n;
	for (int i = 1; i <= 12; i++) {
		cout << n << " * " << i << " = " << n*i << '\n';
	}

	return 0;
}
