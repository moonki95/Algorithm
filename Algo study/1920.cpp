#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long N;
	long M;
	int num;
	
	cin >> N;
	vector <long> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];

	}
	sort(A.begin(), A.end());
	cin >> M;
	for (int j = 0; j < M; j++) {
		cin >> num;
		
		if (binary_search(A.begin(), A.end(), num)) {
			cout << "1\n";
		}
		else
			cout << "0\n";
	}
	return 0;
}