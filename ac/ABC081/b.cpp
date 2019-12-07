#include<iostream>
#include<vector>

int main(int argc, char **argv) {
    int n, input;
    int count = 0;
    std::vector<int> a;

    std::cin >> n;
    while(n > 0) {
        std::cin >> input;
        a.push_back(input);
        n--;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] % 2 == 0) {
            a[i] /= 2;
        }
        else {
            break;
        }

        if (i == a.size() - 1) {
            i = 0;
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}