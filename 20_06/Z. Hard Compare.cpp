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

	long long int a, b, c, d;
	cin >> a >> b >> c >> d;

	if ((b * log(a)) >= (c * log(d)))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
