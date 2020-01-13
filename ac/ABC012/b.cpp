#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    printf("%02d:%02d:%02d", n / 3600, n / 60 % 60, n % 60);

    return 0;
}