#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num[10];
	int sum = 0;
	int result = 0;
	int score = 100;
	
	int num1;
	int num2;
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < 10; i++) {
		sum += num[i];
		num1 = abs(100 - sum);
		num2 = abs(100 - result);
		if (num1 < num2) result = sum;
		else if (num1 == num2) result = max(result, sum);

	}
	cout << result << "\n";
}