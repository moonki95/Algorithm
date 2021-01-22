#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int num;
	long pibo[90];
	cin >> num;

	pibo[0] = 0;
	pibo[1] = 1;

	for (int i = 2; i <= num; i++) {
		pibo[i] = pibo[i - 1] + pibo[i - 2];
	}
	cout << pibo[num] << endl;
}