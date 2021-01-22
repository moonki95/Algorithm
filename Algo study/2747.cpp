#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int dp[100] = { 0, };

	int num;
	cin >> num;

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i < 100; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[num] << endl;
	return 0;
}