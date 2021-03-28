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
    int q;
    cin >> q;

    REP(i, q) {
        string inst;
        int a, b;
        cin >> inst >> a >> b;
        int len = b - a + 1;

        if (inst == "print") {
            cout << s.substr(a, len) << '\n';
        }
        else if (inst == "reverse") {
            string reverse;
            for (int i = b; i >= a; i--) {
                reverse += s[i];
            }
            s.replace(a, len, reverse);
        }
        if (inst == "replace") {
            string p;
            cin >> p;
            s.replace(a, len, p);
        }
    }

    return 0;
}
