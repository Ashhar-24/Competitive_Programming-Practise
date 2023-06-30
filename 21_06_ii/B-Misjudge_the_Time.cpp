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

	int h, m; cin >> h >> m;

	while (true) {
		int a = h / 10;
		int b = h % 10;
		int c = m / 10;
		int d = m % 10;

		int nh = (a * 10) + c;
		int nm = (b * 10) + d;

		// nh <= 23 : nm> 59 || nm <= 59
		// nh > 23  : nm>59  || nm <= 59

		if (nh <= 23 && nm <= 59) {
			cout << h << " " << m;
			break;
		}
		else {
			while (nh <= 23) {
				if (nm > 59) {
					h++;
					m = 0;
					break;
				}
			}
			if (nh > 23) {
				h ++ ;
				m = 0;
			}
			if (h == 24) {    //edge case [to note]
				h = 0;
				m = 0;
			}
			// m++;
			// if(m==60){
			// 	h++;
			// 	m=0;
			// 	if(h==24){
			// 		h=0;
			// 	}
			// }

		}
	}


	return 0;
}
