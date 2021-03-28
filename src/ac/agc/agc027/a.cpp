#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    REP(i, n) {
        cin >> a[i];
    }
    

    sort(a.begin(), a.end());
    int count = 0;
    for (auto&& ai : a) {
        x -= ai;
        if (x >= 0) {
            count++;
        }
    }
    if (x > 0) {
        count--;
    }

    cout << count << '\n';

    return 0;
}