#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n;
    scanf("%d %d", &k, &n);
    vector<int> a(n), distance;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) {
            distance.push_back(a[i] - a[i - 1]);
        }
        if (i == n - 1) {
            distance.push_back(k - a[i] + a[0]);
        }
    }

    sort(distance.begin(), distance.end());
    int sum = 0;
    for (int i = 0; i < distance.size() - 1; i++) {
        sum += distance[i];
    }

    printf("%d\n", sum);

    return 0;
}