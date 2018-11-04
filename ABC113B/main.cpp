#include<iostream>
#include<vector>
#include<math.h>

int main(int argc, char **argv) {
    int n, t, a, ans, diff;
    std::vector<int> h;

    std::cin >> n >> t >> a;

    for (int i = 0; i < n;i++) {
        int input;
        std::cin >> input;
        h.push_back(input);
        h[i] = t - h[i] * 0.006;
    }

    diff = abs(a - h[0]);
    ans = 1;
    for (int j = 0; j < n; j++) {
        if (abs(a - h[j]) < diff) {
            diff = abs(a - h[j]);
            ans = j + 1;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}