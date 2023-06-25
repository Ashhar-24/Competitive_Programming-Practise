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

	int a, b; cin >> a >> b;
	if ((a % b == 0) || (b % a == 0))
		cout << "Multiples" << '\n';
	else
		cout << "No Multiples" << '\n';


	return 0;
}
