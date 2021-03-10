#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int res;
	int input;
	cin >> input;
	vector <int> vec(input+2);

	vec[0] = 1;
	
	for (int i = 1; i <= input; i++) {
		int num;
		cin >> num;
		vec[i] = num;
	}

	sort(vec.begin()+1, vec.end() - 1);

	res = vec[1] * vec[input];

	cout << res << '\n';
	return 0;
}