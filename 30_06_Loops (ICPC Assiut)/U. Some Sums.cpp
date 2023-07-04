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

	int n, a, b;
	cin >> n >> a >> b;
	int sum = 0;

	for (int i = 1; i <= n; i++) {
		int digitsum = 0;
		int digit = i;
		while (digit > 0) {
			digitsum += digit % 10;
			// cout << digitsum << "+";
			digit /= 10;
		}
		if (digitsum >= a && digitsum <= b) {
			sum += i;
		}
	}
	cout << sum;

	return 0;
}
