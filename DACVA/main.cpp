#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(int argc, char **argv) {
    int n, ans;
    int sum = 0;
    double ave, mini;
    vector<double> a;

    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    ave = (double)sum / (double)n;
    mini = ave;

    for (int j = 0; j < n; j++) {
        a[j] = fabs(a[j] - ave);
        if (a[j] < mini) {
            ans = j;
            mini = a[j];
        }
    }

    cout << ans << endl;

    return 0;
}