#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x[4];
	int y[4];

	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}

	if (x[0] == x[1])
		x[3] = x[2];
	else if (x[0] == x[2])
		x[3] = x[1];
	else
		x[3] = x[0];
	
	if (y[0] == y[1])
		y[3] = y[2];
	else if (y[0] == y[2])
		y[3] = y[1];
	else
		y[3] = y[0];

	cout << x[3] << " " <<  y[3] << "\n";
	return 0;
}
