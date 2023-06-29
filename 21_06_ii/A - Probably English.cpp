#include <iostream>
#include <string.h>

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
	bool check = false;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "and" || s == "not" || s == "that" || s == "the" || s == "you") {
			check = true;
			break;
		}
	}
	if (check == true)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
