#include <bits/stdc++.h>

using namespace std;

int arr[501][501];

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);
		}
	}

	int res = 0;
	for (int i = 1; i <= n; i++) {
		res = max(arr[n][i],res);
	}
	cout << res << "\n";
	return 0;
}