#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    char c;
    int count[26] = {0};
    while (cin >> c) {
        if (c != ' ' && c != ',' && c != '.') {
            count[tolower(c) - 'a']++;
        }
    }
    REP(i, 26) {
        printf("%c : %d\n", (int)i + 'a', count[i]);
    }

    return 0;
}