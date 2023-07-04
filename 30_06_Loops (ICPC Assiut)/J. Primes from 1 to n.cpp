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

	for (int i = 2; i <= n; i++) {
		//checking for factors
		bool check = false;
		for (int j = 2; j * j <= i; j++) {  // checking upto sq root n
			if (i % j == 0) {
				check = true;
				break;
			}

		}
		if (check == false)
			cout << i << " ";
	}

	return 0;
}
