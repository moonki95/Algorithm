#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;

	getline(cin, str);

	stack <char> stk;
	bool flag = true;

	if (str.size() == 1) {
		cout << flag << "\n";
	}

	else if (str.size() == 2) {
		if (str[0] != str[1]) {
			flag = false;
		}
		cout << flag << "\n";
	}

	else {
		for (int i = 0; i <= (str.size() / 2) - 1; i++) {
			stk.push(str[i]);
		}

		if (str.size() % 2 == 1) {
			//È¦¼öÀÏ¶§
			for (int i = (str.size() / 2) + 1; i < str.size(); i++) {
				if (str[i] != stk.top()) {
					flag = false;
					break;
				}
				stk.pop();
			}

		}
		else {
			//Â¦¼öÀÏ¶§
			for (int i = (str.size() / 2) ; i < str.size(); i++) {
				if (str[i] != stk.top()) {
					flag = false;
					break;
				}
				stk.pop();
			}

		}
		cout << flag << "\n";
	}
	
	return 0;
}