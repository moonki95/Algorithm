#include <bits/stdc++.h>

using namespace std;
char arr[101][101];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector <int> vec;
	string str;
	cin >> str;

	int n, m;

	for (int i = 1; i <= str.length(); i++) {
		if (str.length() % i == 0) {
			vec.push_back(i);
		}
	}
	n = vec[0];
	m = vec[vec.size() - 1];
	for (int i = 0; i <= vec.size() / 2; i++) {
		if (vec.size() % 2 == 0) {
			n = vec[i];
			m = vec[vec.size() - i - 1];
			if (n >= m || i == (vec.size() / 2) -1) break;
			
		}
		else {
			if (n >= m) break;

			n = vec[i];
			m = vec[vec.size() - i - 1];
		}
		
		
	}

	int k = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = str[k];
			k++;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[j][i];
		}
	}

	cout << "\n";
	return 0;
}