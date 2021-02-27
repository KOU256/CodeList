#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char **argv) {
    int m;

    cin >> m;

    if (m < 100) {
        printf("00\n");
    }
    else if (m <= 5000) {
        printf("%02d\n", m / 100);
    }
    else if (m <= 30000) {
        printf("%d\n", m / 1000 + 50);
    }
    else if (m <= 70000) {
        printf("%02d\n", (m / 1000 - 30) / 5 + 80);
    }
    else if (m > 70) {
        printf("89\n");
    }

    return 0;
}