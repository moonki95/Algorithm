#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	vector <int> card;
	int result = 0;
	int card_num;
	int card_sum;
	int min_num = -1;
	cin >> card_num >> card_sum;

	for (int i = 0; i < card_num; i++) {
		int num;
		cin >> num;
		card.push_back(num);
	}

	for (int i = 0; i < card.size() - 2; i++) {
		for (int j = i + 1; j < card.size() - 1; j++) {
			for (int k = j + 1; k < card.size(); k++) {
				if(card[i] + card[j] + card[k] <= card_sum && card[i] + card[j] + card[k] > result)
					result = card[i] + card[j] + card[k];
			}
		}
	}

	cout << result << "\n";
	
	return 0;
}
