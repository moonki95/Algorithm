#include <bits/stdc++.h>

using namespace std;
long long dp[1000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	dp[0] = 0;
	dp[1] = 1;
	int num;

	cin >> num;
	
	if (num > 0) {
		for (int i = 2; i <= num; i++) {
			dp[i] = (dp[i - 1] % 1000000000 + dp[i - 2] % 1000000000);
		}
		cout << "1" << "\n";
		cout << abs(dp[num]) % 1000000000 << "\n";
	}
	else if (num < 0) {

		for (int i = 2; i <= abs(num); i++) {
			dp[i] = (dp[i - 2] % 1000000000 - dp[i - 1] % 1000000000);
		}
		if (dp[abs(num)] > 0) {
			cout << "1" << "\n";
		}
		else
			cout << "-1"  << "\n";
		cout << abs(dp[abs(num)]) % 1000000000 << "\n";
	}
	else if (num == 0) {
		cout << "0" << "\n";
		cout << abs(dp[abs(num)]) % 1000000000 << "\n";
	}
	


	return 0;
}