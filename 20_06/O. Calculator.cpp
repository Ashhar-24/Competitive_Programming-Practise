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

	int a, b; char ch;
	cin >> a >> ch >> b;

	if (ch == '+')
		cout << a + b;
	else if (ch == '-')
		cout << a - b;
	else if (ch == '/')
		cout << a / b;
	else
		cout << a*b;


	return 0;
}
