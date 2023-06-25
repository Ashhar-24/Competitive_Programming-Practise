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

	long long a, b, c, d; cin >> a >> b >> c >> d;
	a %= 100;
	b %= 100;
	c %= 100;
	d %= 100;

	long long ans = a * b * c * d;
	ans %= 100;

	if ((ans) < 10)
		cout << "0" << ans;
	else
		cout << (ans);

	return 0;
}
