#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ll a, b, c;
    
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a == b && b == c) {
        if (a % 2 == 0) {
            printf("-1\n");
        }
        else {
            printf("0\n");
        }
    }
    else {
        int count = 0;
        while (a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
            ll aa = a, bb = b;
            a = (b + c) / 2;
            b = (aa + c) / 2;
            c = (aa + bb) / 2;
            count++;
        }
        printf("%d\n", count);
    }

    return 0;
}