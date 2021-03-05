#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < ll(n); ++i)

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int ans = 0;
    int outlet = 1;
    while (outlet < b) {
        outlet--;
        outlet += a;
        ans++;
    }

    printf("%d\n", ans);

    return 0;
}