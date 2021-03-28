#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    string s;
    cin >> s;

    int ans = 999;
    REP(i, s.length() - 2) {
        int num = stoi(s.substr(i, 3));
        ans = min(ans, abs(753 - num));
    }

    cout << ans << '\n';

    return 0;
}
