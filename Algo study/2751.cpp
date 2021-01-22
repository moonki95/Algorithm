#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int test_case;
	cin >> test_case;
	vector <int> v;
	int num;
	for (int i = 0; i < test_case; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < test_case; i++) {
		cout << v[i] << "\n";
	}
	return 0;
}