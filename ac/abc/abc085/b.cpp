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

    set<int> d;
    REP(n_i, n) {
        int tmp;
        cin >> tmp;
        d.insert(tmp);
    }

    cout << d.size() << endl;

    return 0;
}