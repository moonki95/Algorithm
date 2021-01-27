#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int input;
	cin >> input;
	queue <int> q;
	string str;
	int num;
	for (int i = 0; i < input; i++) {
		cin >> str;
		if (str == "push") {
			cin >> num;
			q.push(num);
		}
		if (str == "front") {
			if (q.empty() == 1) {
				cout << "-1" << "\n";
			}
			else
				cout << q.front() << "\n";
		}
		if (str == "back") {
			if (q.empty() == 1) {
				cout << "-1" << "\n";
			}
			else
				cout << q.back() << "\n";
		}
		if (str == "size") {
			cout << q.size() << "\n";
		}
		if (str == "empty") {
			cout << q.empty() << "\n";
		}
		if (str == "pop") {
			if (q.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}

	}
	return 0;
}