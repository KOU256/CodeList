#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define INF 100000000
#define FOR(index, init, max) for (int index = (init); index < (max); index++)
#define REP(index, max) for (int index = 0; index < (max); index++)
#define FOREACH(x, array) for (auto&& (x) : array)
#define VECCIN(vec) for (auto&& vec_i : vec) cin >> vec_i
#define VECCOUT(vec) for (const auto& vec_i : vec) cout << vec_i << endl

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    VECCIN(h);

    int dp[111111];
    FOREACH(x, dp) {
        x = INF;
    }
    dp[0] = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j <= k; j++) {
            if (i + j < n) {
                dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
            }
        }
    }

    cout << dp[n - 1] << endl;

    return 0;
}