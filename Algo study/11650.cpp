#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int num;
	cin >> num;

	vector<pair <int, int>> p(num);

	for (int i = 0; i < num; i++) {
		cin >> p[i].first >> p[i].second;
	}

	sort(p.begin(), p.end());

	for (int i = 0; i < num; i++) {
		cout << p[i].first << " " <<p[i].second << "\n";
	}
	return 0;
}