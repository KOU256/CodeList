#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, X;
    cin >> n >> X;

    vector<int> a(n);
    for (auto&& a_i : a) {
        cin >> a_i;
    }

    int ans = 0;
    for (int n_i = 0; n_i < n; n_i++) {
        if ((X >> n_i) & 0b1) {
            ans += a[n_i];
        }
    }

    cout << ans << endl;

    return 0;
}