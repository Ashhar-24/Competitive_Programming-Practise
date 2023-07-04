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


	//even check
	// int j = -1;
	// int even[j];
	int even = 0, odd = 0, pos = 0, neg = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			pos++;
			// cout << i << '\n';
			// even[++j] = arr[i];
		}
		if (arr[i] < 0)
			neg++;
		if (arr[i] % 2 == 0)
			even++;
		if (arr[i] % 2 != 0)
			odd++;
	}


	cout << "Even: " << even << '\n';
	cout << "Odd: " << odd << '\n';
	cout << "Positive: " << pos << '\n';
	cout << "Negative: " << neg << '\n';
	// even print
	// for (int i = 0; i < j + 1; i++) {
	// 	cout << even[i] << " ";
	// }


	return 0;
}
