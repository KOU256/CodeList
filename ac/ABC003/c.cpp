#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> r(n, 0);
    for (auto&& r_i : r) {
        cin >> r_i;
    }
    sort(r.begin(), r.end());

    double c = 0.0;
    for (int r_i = (int)r.size() - k; r_i < (int)r.size(); r_i++) {
        c = (c + r[r_i]) / 2.0;
    }

    cout << fixed << setprecision(7) << c << endl;

    return 0;
}