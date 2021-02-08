#include <bits/stdc++.h>

using namespace std;

int main()
{

    int input;
    int k, l;
    int res = 0;
    
    cin >> input >> k >> l;
    
    vector<int> myvec;
    for (int i = 0; i < input; i++)
    {
        vector<int> vec;
        bool flag = true;
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            int num;
            cin >> num;
            vec.push_back(num);
            sum += num;
        }

        for (int k = 0; k < 3; k++) {
            if (vec[k] < l) {
                flag = false;
                continue;
            }
        }
        if (sum < k) {
            continue;
        }
        if (flag == true) {
            for (int a = 0; a < 3; a++) {
                myvec.push_back(vec[a]);
            }
            res++;
        }
        
    }

    cout << res << "\n";

    for (int i = 0; i < myvec.size(); i++)
    {
        cout << myvec[i] << " ";
    }
    cout << "\n";
    return 0;
}