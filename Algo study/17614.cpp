#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int input;
	int result = 0;

	cin >> input;

	for (int i = 1; i <= input; i++) {
		
		string str = to_string(i);
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '3' || str[j] == '6' || str[j] == '9') {
				result++;
				cout << str << '\n';
			}
		}
	}

	cout << result << '\n';
	return 0;
}