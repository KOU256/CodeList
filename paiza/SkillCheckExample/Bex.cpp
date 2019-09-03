#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> seat(n, true);
    for (int i = 0; i < m;i++) {
        int a, b;
        cin >> a >> b;
        vector<int> list(a);
        for (int j = b; j < b + a; j++) {
            if (j <= n) {
                list.push_back(j - 1);
            }
            else if (j > n) {
                list.push_back(j - n - 1);
            }
        }
        for (auto&& j : list) {
            cout << j << endl;
        }

        bool is_angry = false;
        for (auto&& j : list) {
            if (!seat[j]) {
                is_angry = true;
                break;
            }
        }
        if (!is_angry) {
            for (auto&& j : list) {
                seat[j] = false;
            }
        }
    }

    cout << count(seat.begin(), seat.end(), false) << endl;

    return 0;
}