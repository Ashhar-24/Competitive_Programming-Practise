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

	long long int n; cin >> n;
	cout << (n * (n + 1)) / 2 << '\n';


	return 0;
}
