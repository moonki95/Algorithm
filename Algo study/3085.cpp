#include <bits/stdc++.h>

using namespace std;


int check(vector <string>& a) {
	int res = 1;

	for (int i = 0; i < a.size(); i++) {
		int cnt = 1;
		for (int j = 1; j < a.size(); j++) {
			if (a[i][j] == a[i][j - 1]) {
				cnt += 1;
			}
			else
				cnt = 1;
			if (res < cnt) res = cnt;
		}
		cnt = 1;
		for (int j = 1; j < a.size(); j++) {
			if (a[j][i] == a[j - 1][i]) {
				cnt += 1;
			}
			else
				cnt = 1;
			if (res < cnt) res = cnt;

		}
	}
	return res;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int input;
	int res = 0;
	cin >> input;

	vector <string> vec(input);

	for (int i = 0; i < input; i++) {
		cin >> vec[i];
	}

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if (j + 1 < input) {
				swap(vec[i][j], vec[i][j + 1]);
				int temp = check(vec);
				if (res < temp) res = temp;
				swap(vec[i][j], vec[i][j + 1]);
			}

			if (i + 1 < input) {
				swap(vec[i][j], vec[i + 1][j]);
				int temp = check(vec);
				if (res < temp) res = temp;
				swap(vec[i][j], vec[i + 1][j]);
			}
		}

	}
	cout << res << '\n';
	return 0;
}