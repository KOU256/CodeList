#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll A, B, M;
    cin >> A >> B >> M;
    vector<ll> a(A), b(B);
    for (auto&& ai : a) {
        cin >> ai;
    }
    for (auto&& bi : b) {
        cin >> bi;
    }

    ll ans = *min_element(a.begin(), a.end()) + *min_element(b.begin(), b.end());
    ll x, y, c;
    REP(i, M) {
        cin >> x >> y >> c;
        ans = min(ans, a[x - 1] + b[y - 1] - c);
    }

    cout << ans << '\n';

    return 0;
}
