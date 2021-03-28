#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    printf("%.5lf\n", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));

    return 0;
}
