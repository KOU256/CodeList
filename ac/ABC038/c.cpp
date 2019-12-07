#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> a(n);
    for (auto &&i : a) {
        cin >> i;
    }

    int r = 1, ans = 0;
    for (auto l = 0; l < n; l++) {
        while (r < n && a[r - 1] < a[r]) {
            r++;
        }
        ans += r - l;
        if (l + 1 == r) {
            r++;
        }
    }

    cout << ans << endl;

    return 0;
}