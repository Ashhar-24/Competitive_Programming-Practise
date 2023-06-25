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

	char ch, res; cin >> ch;
	if (ch >= 'A' && ch <= 'Z')
		res = (ch + 32);
	else
		res = (ch - 32);
	cout << res << '\n';


	return 0;
}
