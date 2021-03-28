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

    int count = 0;
    REP(i, n) {
        if (i + 1 < 10 ||
            i + 1 >= 100 && i + 1 < 1000 ||
            i + 1 >= 10000 && i + 1 < 100000) {
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}
