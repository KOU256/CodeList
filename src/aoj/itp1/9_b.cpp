#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    string s;
    int m;

    while (true) {
        cin >> s;
        if (s == "-") {
            break;
        }
        cin >> m;

        int h;
        REP(i, m) {
            cin >> h;
            s += s.substr(0, h);
            s.erase(0, h);
        }

        cout << s << '\n';
    }

    return 0;
}
