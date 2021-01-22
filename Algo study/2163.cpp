#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	if (n == 1 && m == 1) {
		cout << "1" << "\n";
	}
	else
		cout << n*m - 1 << "\n";	
	return 0;
}