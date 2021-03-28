#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    cin >> n;
    vector<double> x(n), y(n);
    for (auto&& xi : x) {
        cin >> xi;
    }
    for (auto&& yi : y) {
        cin >> yi;
    }

    double p1 = 0, p2 = 0, p3 = 0, pinf = 0;
    REP(i, n) {
        p1 += abs(x[i] - y[i]);
        p2 += pow(abs(x[i] - y[i]), 2);
        p3 += pow(abs(x[i] - y[i]), 3);
        pinf = max(pinf, abs(x[i] - y[i]));
    }
    p2 = sqrt(p2);
    p3 = cbrt(p3);

    printf("%lf\n%lf\n%lf\n%lf\n", p1, p2, p3, pinf);

    return 0;
}
