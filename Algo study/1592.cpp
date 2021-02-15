#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M, L;
	int count = 0;
	cin >> N >> M >> L;
	vector <int> vec(N,0);
	queue <int> q;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (1) {
		vec[q.front() - 1]++;
		if (vec[q.front() - 1] == M) break;
		else {
			if (vec[q.front() - 1] % 2 == 1) {
				for (int j = 0; j < L; j++) {
					q.push(q.front());
					q.pop();
				}
			}
			else if (vec[q.front() - 1] % 2 == 0) {
				for (int k = 0; k < N - L; k++) {
					q.push(q.front());
					q.pop();
				}
			}
		}
		count++;
	}

	cout << count << "\n";
	return 0;
}