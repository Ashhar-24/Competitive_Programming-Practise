#include <iostream>
#include <climits>
using namespace std;


void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	init();

	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;

		int arr[n];

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		// sort(arr, arr + n);

		int ans = INT_MAX;

		// for (int i = 1; i < n - 1; i++) {
		// 	int diff = abs(arr[i] - arr[i - 1]) + abs(arr[i] - arr[i + 1]);
		// 	// cout << diff << " ";n
		// 	ans = min(ans, diff);
		// }
		// cout << ans << '\n';

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = j + 1; k < n; k++) {
					int a = abs(arr[i] - arr[j]) + abs(arr[j] - arr[k]);  //j => j j j
					int b = abs(arr[i] - arr[j]) + abs(arr[i] - arr[k]);  //i => i i i
					int c = abs(arr[i] - arr[k]) + abs(arr[k] - arr[j]);  //k => k k k

					ans = min(ans, a);
					ans = min(ans, b);
					ans = min(ans, c);
				}
			}
		}

		cout << ans << '\n';
	}

	return 0;
}
