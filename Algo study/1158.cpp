#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	
	int num;
	int start;
	cin >> num >> start;
	queue <int> q;
	for (int i = 1; i <= num; i++) {
		q.push(i);
	}
	cout << "<";
	while (!q.empty()) {
		for (int i = 0; i < start - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		if (q.size() == 1) {
			cout << q.front() << ">";
		}
		else {
			cout << q.front() << ", ";
		}
		q.pop(); // 3번째있는거 제거
	}
	return 0;
}