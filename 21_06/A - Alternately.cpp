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
	char a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bool check = true;

	for (int i = 0; i < n; i ++) {
		if (a[i] == a[i + 1]) {
			check = false;
			break;
		}
	}

	if (check == true || n == 1)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
