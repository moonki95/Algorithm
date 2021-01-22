#include <bits/stdc++.h>

using namespace std;

int dp[100001] = {0,};
int arr[100001] = { 0, };
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int res;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	dp[0] = arr[0];
	res = dp[0];

	for (int i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], dp[i]);
		res = max(res, dp[i]);
	}
	cout << res << "\n";
	return 0;
}