#include <bits/stdc++.h>

using namespace std;

int main() {
    int v, t, s, d;
    scanf("%d %d %d %d", &v, &t, &s, &d);

    if (d < v * t || d > v * s) {
        puts("Yes");
    }
    else {
        puts("No");
    }

    return 0;
}