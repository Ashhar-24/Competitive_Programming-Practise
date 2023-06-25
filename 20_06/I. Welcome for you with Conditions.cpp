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
	if (a >= b) cout << "Yes" << '\n';
	else cout << "No" << '\n';


	return 0;
}
