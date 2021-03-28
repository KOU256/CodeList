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

    int t = 0, h = 0;
    REP(i, n) {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1 > s2) {
            t += 3;
        }
        else if (s1 < s2) {
            h += 3;
        }
        else {
            t++;
            h++;
        }
    }

    cout << t << ' ' << h << '\n';

    return 0;
}
