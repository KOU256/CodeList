#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define FOR(index, init, max) for (int index = (init); index < (max); index++)
#define REP(index, max) for (int index = 0; index < (max); index++)
#define FOREACH(x, array) for (auto&& (x) : array)
#define VECCIN(vec) for (auto&& vec_i : vec) cin >> vec_i
#define VECCOUT(vec) for (const auto& vec_i : vec) cout << vec_i << endl

int main() {
    int n, k;
    cin >> n >> k;

    vector<ll> a(n), b(n);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    REP(vec_i, n) {
        cin >> a[vec_i] >> b[vec_i];
        q.push({a[vec_i], vec_i});
    }

    ll time = 0;
    while (k > 0) {
        k--;
        pair<ll, ll> tmp = q.top();
        q.pop();
        time += tmp.first;
        q.push({tmp.first + b[tmp.second], tmp.second});
    }

    cout << time << endl;

    return 0;
}