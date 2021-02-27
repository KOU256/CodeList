#include <bits/stdc++.h>

using namespace std;

int main() {
    array<array<int, 3>, 3> bingo{};
    for (auto && i : bingo) {
        for (int & j : i) {
            scanf("%d", &j);
        }
    }

    int n;
    scanf("%d", &n);
    for (int k = 0; k < n; ++k) {
        int tmp;
        scanf("%d", &tmp);
        for (auto && i : bingo) {
            for (int & j : i) {
                if (j == tmp) {
                    j = 0;
                }
            }
        }
    }

    if (bingo[0][0] + bingo[0][1] + bingo[0][2] == 0 ||
        bingo[1][0] + bingo[1][1] + bingo[1][2] == 0 ||
        bingo[2][0] + bingo[2][1] + bingo[2][2] == 0 ||
        bingo[0][0] + bingo[1][0] + bingo[2][0] == 0 ||
        bingo[0][1] + bingo[1][1] + bingo[2][1] == 0 ||
        bingo[0][2] + bingo[1][2] + bingo[2][2] == 0 ||
        bingo[0][0] + bingo[1][1] + bingo[2][2] == 0 ||
        bingo[0][2] + bingo[1][1] + bingo[2][0] == 0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}
