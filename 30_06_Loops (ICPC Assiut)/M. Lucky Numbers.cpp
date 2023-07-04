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

	int m, n;
	cin >> m >> n;

	int check = false;

	for (int i = m; i <= n; i++) {     // looping from m to n and checking for lucky nos
		bool check2 = true;
		for (int j = i; j > 0; j /= 10) { 		// chechking the digits of the no => 4 or 7

			if (j % 10 == 7 || j % 10 == 4) {
				// j = j / 10;
				continue;
			}
			else {
				check2 = false;
				break;
			}

		}
		if (check2 == true) {
			check = true;
			cout << i << " ";			// printing if the no has only 4/7 as its digit
		}


	}

	if (check == false) {
		cout << -1;
	}

	return 0;
}
