#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool flag = false;
	

	while (1) {
		int input;

		cin >> input;

		string str;
		str = to_string(input);
		
		if (str == "0") break;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] != str[str.size() - 1 - i]) {
				flag = false;
				break;
			}
			else flag = true;
		}

		if (flag == true) cout << "yes" << "\n";
		else cout << "no" << "\n";
		//if (str.size() == 1) {
		//	cout << "yes" << "\n";
		//	continue;
		//}
		//if (str.size() == 2) {
		//	if (str[0] == str[1]) {
		//		cout << "yes" << "\n";
		//		continue;
		//	}
		//	else{
		//		cout << "no" << "\n";
		//		continue;
		//	}
		//}
		////Â¦¼öÀÏ¶§
		//if (str.size() % 2 == 0) {
		//	for (int i = 0; i < str.size() / 2 - 1; i++) {
		//		if (str[i] == str[str.size() - 1 - (i + 1) ]) {
		//			flag = true;
		//		}
		//		else
		//			flag = false;
		//	}
		//	if (flag == true) cout << "yes" << "\n";
		//	else cout << "no" << "\n";
		//}

		////È¦¼öÀÏ¶§
		//else if (str.size() % 2 == 1) {
		//	for (int i = 0; i < str.size() / 2; i++) {
		//		if (str[i] == str[str.size() - 1 - i]) {
		//			flag = true;
		//		}
		//		else
		//			flag = false;
		//	}
		//	if (flag == true) cout << "yes" << "\n";
		//	else cout << "no" << "\n";
		//}
	}
	

	return 0;
}