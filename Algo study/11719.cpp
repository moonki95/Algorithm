#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str[100];

	for (int i = 0; i < 100; i++) {
		getline(cin,str[i]);
	}

	for (int i = 0; i < 100; i++) {
		cout << str[i] << "\n";
	}
	return 0;
}