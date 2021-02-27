#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    vector<int> a(n);
    for (auto&& i : a) {
        scanf("%d", &i);
        if (i == 0) {
            n--;
        }
    }

    printf("%.0lf\n", ceil((double)accumulate(a.begin(), a.end(), 0) / (double)n));

    return 0;
}