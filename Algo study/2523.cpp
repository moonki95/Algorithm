#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	
	int num;

	cin >> num;
	int mynum = 0;
	for (int i = 0; i < 2 * num - 1; i++) {
		if (i >= num) {
			mynum--;
		}
		else if (i < num) {
			mynum++;
		}
		for (int j = 0; j < mynum; j++) {
			cout << "*";
		}
		
		
		cout << "\n";
	}
	return 0;
}