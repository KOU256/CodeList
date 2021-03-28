#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    double a, b, c;
    cin >> a >> b >> c;

    double t = c * M_PI / 180;
    double h = b * sin(t);
    double s = (a * h) / 2;
    double l = a + b + sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(t));

    printf("%lf %lf %lf\n", s, l, h);

    return 0;
}
