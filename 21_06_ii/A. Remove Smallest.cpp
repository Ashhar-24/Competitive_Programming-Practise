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

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}


		int size = n;  //for checking that whether at the end is it possible to have only one element left in the array

		// array sorting
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				int a = arr[i] ;
				if (arr[i] > arr[j]) {
					arr[i] = arr[j];
					arr[j] = a;
				}
			}
		}

		//printing sorted array
		// for (int i = 0; i < n; i++) {
		// 	cout << arr[i] << " ";
		// }


		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (abs(arr[i] - arr[j]) <= 1) {
					size--;
					// cout << size << " ";
					// cout << arr[i] << " " << arr[j] << '\n';
					break;
				}
			}
		}

		if (size <= 1)
			cout << "Yes" << '\n';
		else
			cout << "No" << '\n';

	}
	return 0;
}
