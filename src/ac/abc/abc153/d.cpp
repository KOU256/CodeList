#include <bits/stdc++.h>

using namespace std;

long long attack(long long g) {
    if (g > 1) {
        return 2 * attack(g / 2) + 1;
    }
    else {
        return 1;
    }
}

int main() {
    long long h;
    scanf("%lld", &h);

    printf("%lld\n", attack(h));

    return 0;
}