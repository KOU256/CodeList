#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (abs(a - b) <= 5) {
        printf("%d\n", abs(a - b));
    }
    else {
        printf("%d\n", 10 - abs(a - b));
    }

    return 0;
}