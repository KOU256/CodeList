#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, a;
    scanf("%d %d", &h, &a);

    int count = 0;
    while (h > 0) {
        h -= a;
        count++;
    }

    printf("%d\n", count);

    return 0;
}