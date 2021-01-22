#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c, d, e;
	int res = 0;

	cin >> a >> b >> c >> d >> e;
	res = (a * a + b * b + c * c + d * d + e * e) % 10;
	cout << res << "\n";

	return 0;
}