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

	double a, b; cin >> a >> b;
	double ans = a / b;

	// int/int => result will be given in int itself

	// cout << ans << '\n';

	cout << "floor " << a << " / " << b << " = " << floor(ans) << '\n';
	cout << "ceil " << a << " / " << b << " = " << ceil(ans) << '\n';
	cout << "round " << a << " / " << b << " = " << round(ans) << '\n';

	return 0;
}
