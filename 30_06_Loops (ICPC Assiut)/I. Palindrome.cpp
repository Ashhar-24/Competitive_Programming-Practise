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

	string str;
	cin >> str;
	string str_rev;
	for (int i = str.size() - 1; i >= 0; i--) {
		str_rev.push_back(st[ri]);
	}


	//checking for indices with '0' (or) leading zeroes
	int count = -1;
	for (int i = 0; i < str_rev.size(); i++) {
		if (str_rev[i] == '0') {
			count++;
		}
		else {
			break;
		}
	}

	// cout << str_rev << "+" << count << "+";

	//printing reversed string with no leading zeroes
	for (int i = count + 1; i < str_rev.size(); i++) {
		cout << str_rev[i];
	}

	// palindrome check
	cout << '\n';
	if (str_rev == str)
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';







	// worst approach

	// int power(int n, int x) {
	// 	int k = 1;
	// 	for (int i = 1; i <= x; i++) {
	// 		k = k * n;
	// 	}
	// 	return k;
	// }

	// int fun(int k) {
	// 	int cnt = 0;
	// 	while (k > 0) {
	// 		cnt++;
	// 		k /= 10;
	// 	}
	// 	return cnt;
	// }

	// int n; cin >> n;
	// int total = fun(n);
	// //cout<<total<<"+"<<endl;
	// int arr[total];
	// // int i = 1;
	// int j = -1;
	// int x = n;
	// while (n > 0) {
	// 	arr[++j] = n % 10;
	// 	//cout<<arr[j]<<"+"<<endl;
	// 	// cout << arr[j] << " ";
	// 	// i++;
	// 	n = n / 10;
	// }

	// // printing in the reverse order


	// // checking for palindrome
	// int ans = 0;
	// //  121 ->3
	// for (int i = 0; i < total ; i++) {
	// 	ans += arr[i] * power(10, total - i - 1);
	// 	//cout<<ans<<endl;
	// }

	// cout << ans << '\n';

	// if (ans == x)
	// 	cout << "YES";
	// else
	// 	cout << "NO";


	return 0;
}
