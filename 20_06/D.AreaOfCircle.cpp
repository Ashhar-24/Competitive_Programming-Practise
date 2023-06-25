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

	double pi = 3.141592653;
	double r; cin >> r;
	// cout << pi*r*r << '\n';
	cout << fixed << setprecision(9) << pi*r*r; '\n';
}
