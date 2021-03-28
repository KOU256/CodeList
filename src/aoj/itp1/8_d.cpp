#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    string s, p;
    cin >> s >> p;

    s += s;
    if (s.find(p) != string::npos) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }

    return 0;
}
