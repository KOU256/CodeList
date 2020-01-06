#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define FOR(index, init, max) for (int index = (init); index < (max); index++)
#define REP(index, max) for (int index = 0; index < (max); index++)
#define FOREACH(x, array) for (auto&& (x) : array)
#define VECCIN(vec) for (auto&& vec_i : vec) cin >> vec_i
#define VECCOUT(vec) for (const auto& vec_i : vec) cout << vec_i << endl

int main() {
    int n, w;
    cin >> n >> w;

    vector<int> v(n), u(n);
    FOR(n_i, 0, n) {
        cin >> v[n_i] >> u[n_i];
    }

    int dp[101][101] = {0};
    FOR(i, 0, n) {
        FOR(j, 0, w + 1) {
            if (j < u[i]) {
                dp[i + 1][j] = dp[i][j];
            }
            else {
                dp[i + 1][j] = max(dp[i][j], dp[i + 1][j - u[i]] + v[i]);
            }
        }
    }

    cout << dp[n][w] << endl;

    return 0;
}