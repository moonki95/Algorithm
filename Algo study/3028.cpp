#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;

	cin >> str;
	int start[3] = { 1,0,0 };
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A') {
			swap(start[0], start[1]);
		}
		else if (str[i] == 'B') {
			swap(start[1], start[2]);
		}
		else if (str[i] == 'C') {
			swap(start[2], start[0]);
		}
	}

	for (int i = 0; i < 3; i++) {
		if (start[i] == 1) {
			cout << i+1 << "\n";
		}
	}

	
	return 0;
}