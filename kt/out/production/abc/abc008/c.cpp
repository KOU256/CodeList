#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> c(n);
    for (auto&& c_i : c) {
        cin >> c_i;
    }

    double expected = 0.0;
    for (int c_i = 0; c_i < (int)c.size(); c_i++) {
        int s = 0;
        for (int c_j = 0; c_j < (int)c.size(); c_j++) {
            if (c[c_i] % c[c_j] == 0 && c_i != c_j) {
                s++;
            }
        }
        if (s % 2 == 0) {
            expected += (double)((s + 2.0) / (2.0 * s + 2.0));
        }
        else {
            expected += 0.5;
        }
    }

    cout << fixed << setprecision(7) << expected << endl;

    return 0;
}