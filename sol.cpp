#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a[4];
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		int cnt = 0;
		for (int i = 1; i < 4; i++) {
			cnt += (a[0] < a[i]);
		}
		cout << cnt << '\n';
	}
	return 0;
}
