#include <bits/stdc++.h>

using namespace std;

int main() {
    int tx_a, ty_a, tx_b, ty_b, t, v;
    cin >> tx_a >> ty_a >> tx_b >> ty_b >> t >> v;

    int n;
    cin >> n;

    vector<int> x(n), y(n);
    for (int n_i = 0; n_i < n; n_i++) {
        cin >> x[n_i] >> y[n_i];
    }

    int max_x = t * v;
    for (int n_i = 0; n_i < n; n_i++) {
        if (sqrt(pow(x[n_i] - tx_a, 2) + pow(y[n_i] - ty_a, 2)) + sqrt(pow(tx_b - x[n_i], 2) + pow(ty_b - y[n_i], 2)) <= max_x) {
                cout << "YES" << endl;

                return 0;
            }
    }

    cout << "NO" << endl;

    return 0;
}