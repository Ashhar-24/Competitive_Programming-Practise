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

	float p, q; cin >> p >> q;
	if (p > 0 && q > 0) cout << "Q1";
	else if (p > 0 && q > 0) cout << "Q1";
	else if (p > 0 && q < 0) cout << "Q4";
	else if (p < 0 && q > 0) cout << "Q2";
	else if (p < 0 && q < 0) cout << "Q3";
	else if (p == 0 && q == 0) cout << "Origem";
	else if (p == 0 && (q > 0 || q < 0)) cout << "Eixo Y";
	else cout << "Eixo X";


	return 0;
}
