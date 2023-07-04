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

	int n, s;
	cin >> n >> s;

	int count = 0;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			int c = s - (i + j);
			if (c >= 0 && c <= n)
				count++;
		}
	}
	cout << count;
	return 0;
}
