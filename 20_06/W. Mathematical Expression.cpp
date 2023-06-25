#include <iostream>
using namespace std;


void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	init();

	long long a, b, c;
	char sign, equal;
	cin >> a >> sign >> b >> equal >> c;

	if (sign == '+')
		if (a + b == c)
			cout << "Yes";
		else
			cout << a + b;

	if (sign == '-')
		if (a - b == c)
			cout << "Yes";
		else
			cout << a - b;

	if (sign == '*')
		if (a * b == c)
			cout << "Yes";
		else
			cout << a*b;

	return 0;
}
