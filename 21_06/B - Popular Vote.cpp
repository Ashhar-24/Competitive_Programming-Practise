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

	int n, m, sum = 0, check = 0;
	cin >> n >> m;

	int votes[n];
	for (int i = 0; i < n; i++) {
		cin >> votes[i];
	}

	for (int i = 0; i < n; i++) {
		sum += votes[i];
	}

	for (int i = 0; i < n; i++) {
		if (votes[i] * 4 * m >= sum) { 					// votes[i] >= (sum / (4 * m)) to avoid precision error
			check++;
		}
	}

	if (check >= m)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
