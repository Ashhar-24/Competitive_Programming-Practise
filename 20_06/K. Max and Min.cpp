#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	init();

	int a, b, c; cin >> a >> b >> c;
	// int max, min;
	int x = max(a, b);
	int y = min(a, b);
	cout << min(y, c) << " " << max(x, c);

	return 0;
}
