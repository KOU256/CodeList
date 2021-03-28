#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    string x;
    while (cin >> x, x != "0") {
        int sum = 0;
        REP(i, x.length()) {
            sum += x[i] - '0';
        }

        cout << sum << '\n';
    }

    return 0;
}