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

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		string s;
		while (n > 0) {
			int bit = n % 2;
			s = to_string(bit) + s;
			n = n / 2;
		}

		// cout << s << "+";

		// counting no of 1s
		int count = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '1')
				count++;
		}
		// cout << count;

		// string s2;
		// for (int i = 1; i <= count; i++) {
		// 	s2.push_back('1');
		// }

		// cout << "+ " << s2;
		int ans = 0;
		for (int i = 0; i < count; i++) {
			ans += int(pow(2, i));
		}

		cout << ans << '\n';
	}

	return 0;
}
