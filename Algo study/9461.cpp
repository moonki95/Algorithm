#include <iostream>

using namespace std;

int main() {
	int test_case;
	cin >> test_case;
	long long dp[101];

	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 1;

	for (int j = 0; j < test_case; j++) {
		int num;
		cin >> num;
		for (int i = 3; i < num; i++) {
			dp[i] = dp[i - 2] + dp[i - 3];
		}
		cout << dp[num-1] << endl;
	}
	
	return 0;
}