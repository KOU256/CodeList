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

    REP(i, 10) {
        REP(j, 10) {
            if (i * j == n) {
                cout << "Yes\n";

                return 0;
            }
        }
    }

    cout << "No\n";

    return 0;
}
