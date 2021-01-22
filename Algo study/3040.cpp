#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector <int> input(9);
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> input[i];
		sum += input[i];

	}

	for (int i = 0; i < input.size(); i++) {
		for (int j = i + 1; j < input.size(); j++) {
			if (sum - (input[i] + input[j]) == 100) {
				input.erase(input.begin() + i);
				input.erase(input.begin() + j - 1);
			}
		}
	}

	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << "\n";
	}
	return 0;
}