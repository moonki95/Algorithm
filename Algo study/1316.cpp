#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
int main() {

	

	int input;
	cin >> input;
	int res = 0;

	for (int i = 0; i < input; i++) {
		bool arr[26] = { false, };
		bool flag = true;
		string str;
		cin >> str;

		for (int j = 0; j < str.size(); j++) {
			if (str[j] != str[j + 1]) {
				if (arr[str[j] - 'a'] == true) {
					flag = false;
					break;
				}
				else
					arr[str[j] - 'a'] = true;
			}
			
		}
		if (flag == true) res++;
	}
	cout << res << endl;
	return 0;
}