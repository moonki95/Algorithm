#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int K; // 오영식이 갖고있는 랜선의 개수
int N; // 필요한 랜선의 개수

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> K >> N;
	vector <long> wire(K);
	
	ll res = 0;
	ll left = 0;
	ll right = LLONG_MAX;


	for (int i = 0; i < K; i++) {
		cin >> wire[i];
	}

	while (left <= right) {
		ll mid = (left + right) / 2;
		ll count = 0;
		for (int i = 0; i < K; i++) {
			count += wire[i] / mid;
		}
		if (count >= N) {
			left = mid + 1;
			if (res < mid) {
				res = mid;
			}
		}
		else
			right = mid - 1;
	}
	cout << res<<"\n";
	return 0;
}