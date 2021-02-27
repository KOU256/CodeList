#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int l, n;
    cin >> l >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        x[i] = tmp;
    }

    int max_t = 0, min_t = 0;
    for (auto & i : x) {
        max_t = max(max_t, max(i, l - i));
        min_t = max(min_t, min(i, l - i));
    }

    cout << min_t << " " << max_t << endl;

    return 0;
}
