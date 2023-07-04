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

	int sum = 0;
	int a = 0;
	int b = 1;


	if (n == 1) {
		cout << a << " ";
		n--;
	}
	else if (n >= 2) {
		cout << a << " " << b << " ";
	}

	for (int i = 1; i <= n - 2; i++) {
		int sum = a + b;
		cout << sum << " ";
		// int c = a;
		a = b;
		b = sum;
	}

	return 0;
}

