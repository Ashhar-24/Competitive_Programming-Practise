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

	long long m, n;
	cin >> m >> n;

	// int sum = (m % 10) + (n % 10);
	cout << (m % 10) + (n % 10) << '\n';

	return 0;
}