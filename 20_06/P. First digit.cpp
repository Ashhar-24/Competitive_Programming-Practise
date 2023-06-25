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

	int n; cin >> n;
	// as 999<n<=9999
	if ((n / 1000) % 2 == 0)
		cout << "EVEN";
	else
		cout << "ODD";

	return 0;
}
