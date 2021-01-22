#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool arr[31] = { 0, };

	for (int i = 0; i < 28; i++) {
		int num;
		cin >> num;
		arr[num] = 1;
	}

	for (int i = 1; i < 31; i++) {
		if (arr[i] == 0) {
			cout << i << "\n";
		}
	}

	return 0;
}