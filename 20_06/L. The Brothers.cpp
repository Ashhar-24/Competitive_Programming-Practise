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

	string f1, l1, f2, l2;
	cin >> f1 >> l1 >> f2 >> l2;

	if (l1 == l2) cout << "ARE Brothers" << '\n';
	else cout << "NOT" << '\n';


	return 0;
}
