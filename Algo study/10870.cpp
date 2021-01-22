#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int input;
	cin >> input;
	int pibo[20];

	pibo[0] = 0;
	pibo[1] = 1;


	for (int i = 2; i <= input; i++) {
		pibo[i] = pibo[i - 1] + pibo[i - 2];
	}

	cout << pibo[input] << "\n";
	return 0;
}