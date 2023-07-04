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
		string s;
		cin >> s;

		string rev;
		for (int i = s.size() - 1; i >= 0 ; i--) {
			rev.push_back(s[i]);
		}

		for (int i = 0 ; i < rev.size(); i++) {
			cout << rev[i] << " ";
		}
		cout << '\n';
	}

	return 0;
}
