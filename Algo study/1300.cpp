#include <bits/stdc++.h>

using namespace std;


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int k;

	cin >> N >> k;
	int first = 1;
	int last = k;
	int res = 0;
	while (first <= last) {
		int mid = (first + last) / 2;
		long long num = 0;
		for (int i = 1; i <= N; i++) {
			num += min(mid / i, N);
		}
		if (num < k) {
			first = mid + 1;
		}
		else {
			res = mid;
			last = mid - 1;
		}
	}
	cout << res << "\n";
	return 0;
}