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

    set<char> ss;
    REP(i, s.length()) {
        ss.insert(s[i]);
    }

    if (s.length() == ss.size()) {
        cout << "yes\n";
    }
    else {
        cout << "no\n";
    }

    return 0;
}
