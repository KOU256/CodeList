#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int ans = 0;
    vector<int> diff;

    cin >> n;
    diff.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> diff[i];
    }
    for (int j = 0; j < n; j++) {
        int tmp;
        cin >> tmp;
        diff[j] -= tmp;
    }

    sort(diff.begin(), diff.end(), greater<int>());

    int k = 0;
    while (true) {
        if (diff[k] <= 0 || k == n) {
            break;
        }
        ans += diff[k];
        k++;
    }

    cout << ans << endl;

    return 0;
}