#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, d, x;
    cin >> n >> d >> x;
    vector<int> a(n);
    for (auto&& ai : a) {
        cin >> ai;
    }

    x += n;
    for (auto& ai : a) {
        for (int i = 1; i * ai + 1 <= d; i++) {
            x++;
        }
    }

    cout << x << '\n';

    return 0;
}