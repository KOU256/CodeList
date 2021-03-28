#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    string w, t;
    cin >> w;

    int count = 0;
    while (true) {
        cin >> t;
        if (t == "END_OF_TEXT") {
            break;
        }
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        if (t == w) {
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}
