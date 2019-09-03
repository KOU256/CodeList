#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;

    vector<int> b(m);
    for (int i = 0; i < b.size(); i++) {
        b[i] = 0;
    }

    for (int i = 0; i < k; i++) {
        int a;
        cin >> a;

        int count = 0;
        if (n > 0) {
            n--;
            count++;
        }
        for (int j = 0; j < b.size(); j++)
        {
            if (j != a - 1 && b[j] > 0) {
                b[j]--;
                count++;
            }
        }
        b[a - 1] += count;
    }

    auto iter = max_element(b.begin(), b.end());
    size_t index = distance(b.begin(), iter);

    for (int i = 0; i < m; i++) {
        if (b[i] >= b[index]) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}