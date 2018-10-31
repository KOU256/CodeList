#include<iostream>
#include<string>

int main(int argc, char **argv) {
    int count = 0;
    std::string s;

    std::cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}