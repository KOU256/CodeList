#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(int argc, char **argv) {
    int n, t, a, ans;
    double diff;
    vector<double> h;

    cin >> n >> t >> a;

    for (int i = 0; i < n;i++) {
        int input;
        cin >> input;
        h.push_back(input);
        h[i] = t - h[i] * 0.006;
    }

    diff = fabs((double)a - h[0]);
    ans = 1;

    for (int j = 0; j < n; j++) {
        if (fabs((double)a - h[j]) < diff) {
            diff = fabs((double)a - h[j]);
            ans = j + 1;
        }
    }

    cout << ans << endl;
    return 0;
}