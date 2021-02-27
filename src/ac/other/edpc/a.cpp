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
    int n;
    cin >> n;

    vector<int> h(n);
    VECCIN(h);

    int dp[100001];
    dp[0] = 0;
    FOR(i, 1, 100001) {
        dp[i] = INF;
    }

    FOR(i, 1, n + 1) {
        if (i == 1) {
            dp[i] = dp[0] + abs(h[i] - h[i - 1]);
        }
        if (i > 1) {
            dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
        }
    }

    cout << dp[n - 1] << endl;

    return 0;
}