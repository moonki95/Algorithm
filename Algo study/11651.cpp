#include <bits/stdc++.h>

using namespace std;

int main() {
	
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);

	int num;
	cin >> num;
	vector<pair<int, int>> vec(num);

	for (int i = 0; i < num; i++) {
		cin >> vec[i].second >> vec[i].first;
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < num; i++) {
		cout << vec[i].second << " " << vec[i].first << "\n";
	}
	return 0;
}