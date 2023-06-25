#include <iostream>
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
	int sum = a + b + c;

	int w = min(a, b);
	int x = min(w, c);
	int y = max(a, b);
	int z = max(y, c);

	cout << x << '\n';
	cout << sum - (x + z) << '\n';
	cout << z << '\n';
	cout << '\n';
	cout << a << '\n' << b << '\n' << c;


	return 0;
}
