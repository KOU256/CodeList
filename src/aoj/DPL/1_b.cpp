#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define FOR(index, init, max) for (int index = (init); index < (max); index++)
#define REP(index, max) for (int index = 0; index < (max); index++)
#define FOREACH(x, array) for (auto&& (x) : array)
#define VECCIN(vec) for (auto&& vec_i : vec) cin >> vec_i
#define VECCOUT(vec) for (const auto& vec_i : vec) cout << vec_i << endl

int main() {
    int N, W;
    cin >> N >> W;

    vector<int> v(N), w(N);
    REP(vec_i, N) {
        cin >> v[vec_i] >> w[vec_i];
    }

    int dp[101][10001] = {0};
    REP(i, N) {
        REP(j, W + 1) {
            if (j >= w[i]) {
                dp[i + 1][j] = max(dp[i][j - w[i]] + v[i], dp[i][j]);
            }
            else {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    cout << dp[N][W] << endl;

    return 0;
}