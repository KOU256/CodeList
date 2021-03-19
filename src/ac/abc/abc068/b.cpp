#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", int(pow(2, int(floor(log2(n))))));
}