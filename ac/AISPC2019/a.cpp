#include <iostream>

using namespace std;

int main() {
    int n, h, w;
    int count = 0;

    cin >> n >> h >> w;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + h <= n && j + w <= n) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}