#include <bits/stdc++.h>

using namespace std;

int n = 1, k = 1;
int t[5][5] = {0};
bool f = false;

void dfs(int i, int lsum) {
    if (i == n) {
        if (lsum == 0) {
            f = true;
        }

        return;
    }

    for (int j = 0; j < k; j++) {
        dfs(i + 1, lsum ^ t[i][j]);
    }
}

int main() {
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &t[i][j]);
        }
    }

    dfs(0, 0);

    if(f) {
        printf("Found\n");

    }
    else {
        printf("Nothing\n");
    }

    return 0;
}