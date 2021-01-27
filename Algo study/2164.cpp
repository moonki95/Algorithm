#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int input;
	cin >> input;
	int num = input;

	queue <int> q;
	for (int i = 1; i <= input; i++) {
		q.push(i);
	}
	while (1) {
		if (num == 1) {
			break;
		}
		q.pop();
		q.push(q.front());
		q.pop();
		num--;
	}
	cout << q.front() << "\n";
	return 0;
}