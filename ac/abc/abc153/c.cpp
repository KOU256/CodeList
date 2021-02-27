#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    vector<long long> h(n);
    for (auto&& i : h) {
        scanf("%lld", &i);
    }

    sort(h.begin(), h.end(), greater<long long>());

    long long count = 0;

    for (auto&& i : h) {
        if (k > 0) {
            k--;
            i = 0;
        }
        else {
            count += i;
            i = 0;
        }
    }

    printf("%lld\n", count);

    return 0;
}