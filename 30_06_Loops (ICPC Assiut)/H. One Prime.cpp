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
	bool check = false;

	//brute force approach  => checking divisibility upto n-1
	// for (int i = 2; i <= n - 1; i++) {
	// 	if (n % i == 0)
	// 		check = true;
	// }

	// if (check == true)
	// 	cout << "NO" << '\n';
	// else
	// 	cout << "YES" << '\n';

	//optimised approach => checking divisibility upto sq.root n as the divisor-pair start to repeat
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			check = true;
	}
	if (check == true)
		cout << "NO" << '\n';
	else
		cout << "YES" << '\n';


	return 0;
}
