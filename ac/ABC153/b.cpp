#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, n;
    scanf("%d %d", &h, &n);

    int a = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        scanf("%d", &tmp);
        a += tmp;
    }

    if (a >= h) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}