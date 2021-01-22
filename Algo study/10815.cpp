#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	vector <int> n_num;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		n_num.push_back(num);
	}
	int m;
	cin >> m;

	vector <bool> vec(m);
	sort(n_num.begin(), n_num.end());
	for (int i = 0; i < vec.size(); i++) {
		int num;
		cin >> num;
		vec[i] = binary_search(n_num.begin(), n_num.end(), num);
	}

	
	for (int i = 0; i < m; i++) {
		cout << vec[i] << " ";
	}
	return 0;
}