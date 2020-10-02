#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n, m, b, c;
    long long ans = 0, sum = 0;
    vector<int> a;

    cin >> n >> m;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int num = 0;
    for (int i = 0; i < m; i++) {
        sort(a.begin(), a.end());

        cin >> b >> c;
        for (int j = 0; j < n; j++) {
            if (a[j] > c) {
                break;
            }
            else if (b == 0) {
                break;
            }
            sum += c;
            b--;
            num++;
        }
        //sum += num * c;
    }

    ans += sum;
    for (; num < n; num++) {
        ans += a[num];
    }
    cout << ans << endl;

    return 0;
}