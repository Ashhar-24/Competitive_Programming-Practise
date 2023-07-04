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
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int maxi = INT_MIN;
	for (int i = 0; i < n; i++) {
		maxi = max(maxi, arr[i]);
		// cout << maxi << '\n';
	}
	cout << maxi;

	return 0;
}
