#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long N;
	cin >> N; // ù°��
	vector <long> num(N);
	long M;
	long num3;
	for (long i = 0; i < N; i++) {
		cin >> num[i]; //��°��
	}
	cin >> M; // ����°��
	sort(num.begin(), num.end());
	for (int i = 0; i < M; i++) {
		cin >> num3; //��°��
		cout << upper_bound(num.begin(), num.end(), num3) - lower_bound(num.begin(), num.end(), num3)<<" ";
	}
	return 0;
}