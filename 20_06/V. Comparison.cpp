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

	int x, y;
	char ch;
	cin >> x >> ch >> y;

	if (ch == '>')
		if (x > y)
			cout << "Right";
		else
			cout << "Wrong";

	else if (ch == '<')
		if (x < y)
			cout << "Right";
		else
			cout << "Wrong";

	else if (ch == '=')
		if (x == y)
			cout << "Right";
		else
			cout << "Wrong";

	return 0;
}
