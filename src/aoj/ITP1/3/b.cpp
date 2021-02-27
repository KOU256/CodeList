// 3/b.cpp
#include <bits/stdc++.h>

int main() {
    int x;
    int count = 0;
    while(scanf("%d", &x)) {
        if (x == 0) {
            break;
        }
        printf("Case %d: %d\n", ++count, x);
    }

    return 0;
}