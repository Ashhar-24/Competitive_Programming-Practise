#include <cmath>
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

	double f; cin >> f;
	double integer, decimal;    //have to use double while using modf()
	decimal = modf(f, &integer);

	if (decimal == 0) {
		cout << "int " << integer;
	}

	else
		cout << "float " << integer << " " << decimal;

	return 0;
}
