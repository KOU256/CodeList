#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define FOR(index, init, max) for (int index = (init); index < (max); index++)
#define REP(index, max) for (int index = 0; index < (max); index++)
#define FOREACH(x, array) for (auto&& (x) : array)
#define VECCIN(vec) for (auto&& vec_i : vec) cin >> vec_i
#define VECCOUT(vec) for (const auto& vec_i : vec) cout << vec_i << endl

int main() {
    int n;
    cin >> n;

    map<string, int> st;
    REP(n_i, n) {
        string tmp;
        cin >> tmp;
        st[tmp]++;
    }

    int m;
    cin >> m;
    REP(m_i, m) {
        string tmp;
        cin >> tmp;
        st[tmp]--;
    }

    int ans = 0;
    FOREACH(st_i, st) {
        ans = max(ans, st_i.second);
    }
    cout << ans << endl;

    return 0;
}