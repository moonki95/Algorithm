#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	unsigned int num1, num2, num3;
	
	while (1) {
		cin >> num1 >> num2 >> num3;
		if (num1 == 0 && num2 == 0 && num3 == 0)
			break;
		if (num1 * num1 + num2 * num2 == num3 * num3) {
			cout << "right" << "\n";
		}
		else if (num2 * num2 + num3 * num3 == num1 * num1) {
			cout << "right" << "\n";
		}
		else if (num3 * num3 + num2 * num2 == num2 * num2) {
			cout << "right" << "\n";
		}
		else
			cout << "wrong" << "\n";
	}
	return 0;
}
