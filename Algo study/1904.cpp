#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int num;
	cin >> num;
	int* dp = new int[num + 1];
	
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	if (num > 2) {
		for (int i = 3; i <= num; i++) {
			dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
		}
		cout << dp[num] << endl;
	}
	else
		cout << dp[num] << endl;
	return 0;
}