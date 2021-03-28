#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll n, a, b;
    scanf("%lld %lld %lld", &n, &a, &b);

    ll ans = 0;
    ans += n / (a + b) * a;
    ans += min(n % (a + b), a);

    printf("%lld\n", ans);

    return 0;
}
