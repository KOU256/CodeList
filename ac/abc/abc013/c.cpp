#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h;
    scanf("%d %d", &n, &h);

    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    long long ans = a * n;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            if (h + b * i + d * j - (n - i - j) * e > 0) {
                ans = min(ans, (long long)(a * i + c * j));
            }
        }
    }

    printf("%lld\n", ans);

    return 0;
}