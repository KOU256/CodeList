#include<iostream>

#define A 500
#define B 100
#define C 50

int main(int argc, char **argv) {
    int a, b, c, x;
    int count = 0;

    std::cin >> a >> b >> c >> x;

    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                if (A * i + B * j + C * k == x) {
                    count++;
                }
            }
        }
    }

    std::cout << count << std::endl;
    return 0;
}