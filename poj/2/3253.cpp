#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define FOR(index, init, max) for (int index = (init); index < (max); i++)
#define REP(index, max) for (int index = 0; index < (max); i++)
#define FOREACH(x, array) for (auto&& (x) : array)
#define VECCIN(vec) for (auto&& vec_i : vec) cin >> vec_i
#define VECCOUT(vec) for (const auto& vec_i : vec) cout << vec_i << endl

#define MAX_LENGTH 50000

int main() {
    int n;
    cin >> n;

    vector<int> l(n);
    VECCIN(l);

    int ans = 0;
    while (n > 1) {
        int x = 0, y = 1;
        sort(l.begin(), l.end());

        int tmp = l[x] + l[y];
        ans += tmp;

        l[x] = tmp;
        l[y] = MAX_LENGTH;
        n--;
    }

    cout << ans << endl;

    return 0;
}