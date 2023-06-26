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

	long long int x, sum = 0; cin >> x;
	int a = x / 500;
	int b = (x % 500) / 5;

	sum = (a * 1000) + (b * 5);
	cout << sum;

	return 0;
}
