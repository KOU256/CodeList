#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;

    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        vector<double> s(n);
        double ave = 0;
        for (auto&& si : s) {
            cin >> si;
            ave += si;
        }
        ave /= n;

        double a2 = 0;
        for (auto&& si : s) {
            a2 += pow(si - ave, 2);
        }
        a2 /= (double)n;

        cout << sqrt(a2) << '\n';
    }

    return 0;
}
