#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num;

	cin >> num;

	int check = (num * 2 - 1) / 2;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - i - 1; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "*";
		}

		cout << "\n";
	}


	return 0;
}