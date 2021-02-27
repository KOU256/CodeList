#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    scanf("%lld", &n);

    vector<long long> a;
    long long count = n;
    if (n > 1) {
        for (long long i = 2; i * i <= n; i++) {
            for (long long j = 2; j <= 33; j++) {
                long long exp = pow(i, j);
                if (exp <= n && find(a.begin(), a.end(), exp) == a.end()) {
                    count--;
                    a.emplace_back(exp);
                }
                else {
                    break;
                }
            }
        }
        printf("%lld\n", count);
    }
    else {
        printf("1\n");
    }

    return 0;
}