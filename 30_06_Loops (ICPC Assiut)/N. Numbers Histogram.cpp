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

	char ch; cin >> ch;
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}


	for (int i = 0; i < n; i++) {   // traversing the array
		while (arr[i] > 0) {		// checking the element and printing it as many times as required
			cout << ch;
			arr[i] -= 1;
		}
		cout << endl;
	}


	return 0;
}
