#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int max_sum = 2025;
    int diff = max_sum - n;
    queue<pair<int, int>> ans;

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i * j == diff) {
                ans.push(pair<int, int>(i, j));
            }
        }
    }

    while (!ans.empty()) {
        printf("%d x %d\n", ans.front().first, ans.front().second);
        ans.pop();
    }

    return 0;
}