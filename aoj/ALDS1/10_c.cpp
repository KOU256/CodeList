#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define FOR(index, init, max) for (int index = (init); index < (max); i++)
#define REP(index, max) for (int index = 0; index < (max); i++)
#define FOREACH(x, array) for (auto&& (x) : array)
#define VECCIN(vec) for (auto&& vec_i : vec) cin >> vec_i
#define VECCOUT(vec) for (const auto& vec_i : vec) cout << vec_i << endl

int main() {
    int q;
    cin >> q;

    int dp[1001][1001] = {0};

    while(q > 0) {
        string x, y;
        cin >> x >> y;

        for (int x_i = 0; x_i < x.length(); x_i++) {
            for (int y_i = 0; y_i < y.length(); y_i++) {
                if (x[x_i] == y[y_i]) {
                    dp[x_i + 1][y_i + 1] = dp[x_i][y_i] + 1;
                }
                else {
                    dp[x_i + 1][y_i + 1] = max(dp[x_i][y_i + 1], dp[x_i + 1][y_i]);
                }
            }
        }

        cout << dp[x.length()][y.length()] << endl;
        q--;
    }

    return 0;
}