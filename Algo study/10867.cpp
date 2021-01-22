#include <bits/stdc++.h>

using namespace std;

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int tc;
	cin >> tc;
	vector <int> num(tc);

	for (int i = 0; i < tc; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end());
	num.erase(unique(num.begin(), num.end()), num.end());
	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << " ";
	}
	return 0;
}