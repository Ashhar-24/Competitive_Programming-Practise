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

	//My approach

	// long long int a, b, c, d;
	// cin >> a >> b >> c >> d;

	// if ((b < c) || (d < a))
	// 	cout << "-1";

	// //same length interval
	// else if ((a == c) && (b == d))
	// 	cout << a << " " << b;

	// else if ((a < c) && (c < b) && (d > b))
	// 	cout << c << " " << b;

	// else if ((c < a ) && (a < d) && (b > d))
	// 	cout << a << " " << d;

	// //ab>cd
	// else if ((a < c) && (c < b) && (b == d))
	// 	cout << c << " " << b;

	// else if ((a < c ) && (c < b) && (a < d ) && (d < b))
	// 	cout << c << " " << d;

	// else if ((a == c) && ( a < d) && (d < b))
	// 	cout << c << " " << d;

	// else if ((c < a ) && (a < d) && (d > a) && (b > d))
	// 	cout << a << " " << d;

	// //cd>ab
	// else if ((a < c ) && (c < b) && (d > b))
	// 	cout << c << " " << b;

	// else if ((c <= a ) && (a < d) && (c < b) && (b <= d))
	// 	cout << a << " " << b;

	// else if ((c < a ) && (a < d) && (b > d))
	// 	cout << a << " " << d;

	// //edge cases
	// else if (((c == d) && (a < c) && (c == b)) || ((c == d) && (a == c) && (b > c)))
	// 	cout << c << " " << d;

	// else if (((a == b) && (a > c) && (a == d)) || ((a == b) && (a == c) && (b < d)))
	// 	cout << a << " " << b;

	// else if ((c == b) && (c > a))
	// 	cout << c << " " << b;

	// else if ((a == d) && (a > c))
	// 	cout << a << " " << d;


	// mentors approach (efficient)

	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;

	if ((l2 > r1) || (l1 > r2))
		cout << "-1";
	else
		cout << max(l1, l2) << " " << min(r1, r2);


	return 0;
}
