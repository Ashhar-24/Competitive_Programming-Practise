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

	int n, year, month, days; cin >> n;
	year = n / 365;
	month = (n % 365) / 30;
	days = (n % 365) % 30;

	cout << year << " years" << '\n';
	cout << month << " months" << '\n';
	cout << days << " days" << '\n';

	return 0;
}
