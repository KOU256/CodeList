#include <bits/stdc++.h>

int main() {
    int S;
    scanf("%d", &S);

    int h = S / 3600, m = S % 3600 / 60, s = S % 60;
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
