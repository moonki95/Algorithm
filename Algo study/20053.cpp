#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tc;
	cin >> tc;
	
	
	for (int i = 0; i < tc; i++) {
		int num;
		int rmin = 1000000;
		int rmax = -1000000;

		int input;
		cin >> input;
		vector <int> vec(input);
		for (int j = 0; j < input; j++) {
			cin >> vec[j];
			rmax = max(vec[j], rmax);
			rmin = min(vec[j], rmin);
			/*if (vec[j] > max) {
				max = vec[j];
			}
			else if (vec[j] < min) {
				min = vec[j];
			}*/
		}
		cout << rmin << " " << rmax << "\n";
	}
	return 0;
}