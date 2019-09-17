#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    vector<int> dec(k);
    for (auto&& i : dec) {
        cin >> i;
    }

    for (auto i = 1; i <= k; i++) {
        int price = n * i;
        bool can_exit = true;

        while (price > 0) {
            int q = price % 10;

            for (const auto& j : dec) {
                if (q == j) {
                    can_exit = false;
                    break;
                }
            }
            price /= 10;
        }
        if (can_exit) {
            cout << n * i << endl;
            break;
        }
    }

    return 0;
}