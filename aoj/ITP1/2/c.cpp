// 2/c.cpp
#include <bits/stdc++.h>

int main() {
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    std::sort(a, a + (sizeof(a) / sizeof(a[0])));

    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}