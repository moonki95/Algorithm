#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	
	int x=0, y=0, w=0, h=0;
	int result1,result2;
	cin >> x >> y >> w >> h;

	result1 = min(x, y);
	result2 = ((w - x) >= (h - y)) ? h - y : w - x;

	cout << min(result1,result2) << "\n";

	return 0;
}