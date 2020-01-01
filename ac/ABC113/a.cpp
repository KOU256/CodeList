#include<iostream>

int main(int argc, char **argv) {
    int a, b;

    std::cin >> a >> b;

    (a * b) % 2 == 0 ? std::cout << "Even" << std::endl
                     : std::cout << "Odd" << std::endl;

    return 0;
}