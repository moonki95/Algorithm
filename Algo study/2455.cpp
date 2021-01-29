#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num1, num2;
	int mymax = -1;
	int res = 0;
	for (int i = 0; i < 4; i++) {
		cin >> num1 >> num2;
		res += (num2 - num1);
		mymax = max(res, mymax);
	}

	cout << mymax << "\n";
	return 0;
}
