#include <bits/stdc++.h>

using namespace std;


int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int num;

    cin >> num;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (i>j) {
                cout << " ";
            }
            else
                cout << "*";
        }
        cout << "\n";
    }

    return 0;
}