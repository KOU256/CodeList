#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(int argc, char **argv) {
    int n, t, a, ans, diff;
    vector<int> h;

    cin >> n >> t >> a;

    for (int i = 0; i < n;i++) {
        int input;
        cin >> input;
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

    cout << ans << endl;
    return 0;
}